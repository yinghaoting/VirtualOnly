@echo off
set in=%1
echo �����ļ� %in%
if %in:~0,1% == " (
set out=%in:~0,-5%
) else (
set out=%in:~0,-4%
)
echo ����ļ� %out%
@echo on
g++ %in% -o %out%
@echo off
pause