@echo off
set /p in=�������ļ����� 
echo �����ļ� %in%
set out=%in:~0,-4%
echo ����ļ� %out%
@echo on
g++ %in% -o %out%
@echo off
pause