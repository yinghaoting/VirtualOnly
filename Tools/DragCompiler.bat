@echo off
set in=%1
echo 输入文件 %in%
set out=%in:~0,-4%
:: 如果目录包含引号会出错，
:: IF %out:~-1,-0%=="."(
:: set out=%out:~0,-1%
:: ) 
echo 输出文件 %out%
@echo on
g++ %in% -o %out%
@echo off
pause