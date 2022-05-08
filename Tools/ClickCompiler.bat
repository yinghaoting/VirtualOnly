@echo off
set /p in=请输入文件名： 
echo 输入文件 %in%
set out=%in:~0,-4%
echo 输出文件 %out%
@echo on
g++ %in% -o %out%
@echo off
pause