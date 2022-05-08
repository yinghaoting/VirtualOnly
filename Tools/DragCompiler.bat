@echo off
set in=%1
echo 输入文件 %in%
if %in:~0,1% == " (
set out=%in:~0,-5%
) else (
set out=%in:~0,-4%
)
echo 输出文件 %out%
@echo on
g++ %in% -o %out%
@echo off
pause