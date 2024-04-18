#ifndef TIMELAPS_H
#define TIMELAPS_H


#include <iostream>
//#include <curl/curl.h>
#include <thread>
#include <atomic>
#include <string>
#include <vector>

std::atomic<bool> running(false);

// Sends an HTTP request to each URL in sequence, then waits for the specified interval
void send_http_requests(const std::vector<std::string>& urls) {
    while(running.load()) {
        for (const auto& url : urls) {
            CURL *curl = curl_easy_init();
            if(curl) {
                curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
                CURLcode res = curl_easy_perform(curl);
                if(res != CURLE_OK) {
                    std::cerr << "curl_easy_perform() failed for " << url << ": " << curl_easy_strerror(res) << std::endl;
                }
                curl_easy_cleanup(curl);
            }
        }
        // Wait for the specified interval after sending requests to both URLs
       // std::this_thread::sleep_for(std::chrono::milliseconds(interval_ms));
    }
}
/*
int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <URL1> <URL2> <interval_ms>" << std::endl;
        return 1;
    }

    std::vector<std::string> urls = {argv[1], argv[2]};
    int interval_ms = std::stoi(argv[3]);

    curl_global_init(CURL_GLOBAL_DEFAULT);
    std::string command;
    std::thread request_thread;

    while(true) {
        std::cout << "Enter 'start' to begin sending requests or 'stop' to stop: ";
        std::cin >> command;

        if(command == "start" && !running.load()) {
            running = true;
            request_thread = std::thread(send_http_requests, urls, interval_ms);
        } else if (command == "stop" && running.load()) {
            running = false;
            if (request_thread.joinable()) {
                request_thread.join();
            }
            break;
        }
    }

    curl_global_cleanup();
    return 0;
}*/
#endif
