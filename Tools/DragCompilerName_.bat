@echo off
set in=%1
echo �����ļ� %in%
set out=%in:~0,-5%
echo ����ļ� %out%
@echo on
g++ %in% -o %out%
@echo off
pause