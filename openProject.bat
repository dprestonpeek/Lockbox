@echo off

REM --- Configuration ---
REM Set the full path to your Unreal Editor executable from your source build
SET UNREAL_EDITOR_PATH="C:\Users\dpres\Documents\Projects\UnrealAgain\Engine\Binaries\Win64\UnrealEditor.exe"

REM Set the full path to your .uproject file (optional, if you want to open a specific project)
SET UPROJECT_PATH="C:\Users\dpres\Documents\Projects\Lockbox\Lockbox\Lockbox.uproject"

REM Set the desired graphics adapter index (e.g., 0 for primary, 1 for secondary)
REM You may need to experiment to find the correct index for your dedicated GPU.
SET ADAPTER_INDEX=0

REM --- Launch Unreal Editor ---
echo Starting Unreal Editor on graphics adapter %ADAPTER_INDEX%...

REM To launch the editor with a specific project:
START "UnrealEditor" %UNREAL_EDITOR_PATH% %UPROJECT_PATH% -graphicsadapter=%ADAPTER_INDEX%

REM To launch the editor to the project browser (without a specific project):
REM START "UnrealEditor" %UNREAL_EDITOR_PATH% -graphicsadapter=%ADAPTER_INDEX%

echo.
echo If the editor did not launch or used the wrong GPU, please verify:
echo 1. The UNREAL_EDITOR_PATH is correct.
echo 2. The ADAPTER_INDEX (%ADAPTER_INDEX%) is correct for your desired GPU.
echo 3. Try a different ADAPTER_INDEX (e.g., 0 or 2).

pause