#!/bin/bash

if [ $# -lt 1 ]
then
    read -p "Enter a number: " num
else
    num=$1
fi

make
printf "\n"

files=(primes_brute.exe primes_fast.exe)

for file in "${files[@]}"
do
    time ./$file $num
    printf "\n"
done

exit 0