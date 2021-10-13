@echo on

set /p VulkanSDKDirectory=<VulkanSDKDirectory.txt
set glslValidatorPath=%VulkanSDKDirectory%/Bin/glslangValidator.exe

cd ..
cd Shaders

for %%i in (*.vert *.frag) do %glslValidatorPath% -V "%%~i" -o "%%~i.spv"

pause
