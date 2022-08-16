#!/bin/bash

if [ $# -eq 0 ]
then
    read -p "Enter compiler type: " compiler
else compiler="$1"
fi

make CC=$compiler
printf "\n"

files=(primes_brute.exe primes_fast.exe)

while IFS= read -r line
do
    for file in "${files[@]}"
    do
        time ./$file $line
        printf "\n"
    done
done < "input.txt"

exit 0