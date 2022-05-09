@echo off
set in=%1
echo 输入文件 %in%
set out=%in:~0,-5%
echo 输出文件 %out%
@echo on
g++ %in% -o %out%
@echo off
pause