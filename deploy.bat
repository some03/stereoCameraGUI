 if "%1"=="�f�o�b�O" (
set BUILD_MODE=debug
) else (
set BUILD_MODE=release
)

if not exist deploy\nul (
mkdir deploy
)

xcopy /C /Y %BUILD_MODE%\*.exe deploy\
windeployqt --%BUILD_MODE% deploy %BUILD_MODE%\%2.exe