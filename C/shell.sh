#!/bin/bash

log=../log.txt

if [ $# -eq 0 ]
then
    read -p "Enter C compiler: " compiler
else compiler="$1"
fi

make CC=$compiler
printf "\n"

files=(PrimesBrute.exe PrimesFast.exe)

while IFS= read -r line
do
    for file in "${files[@]}"
    do
        ( time ./$file $line ) 2> $log
        printf "\n"
    done
done < "input.txt"

rm *.o
exit 0
