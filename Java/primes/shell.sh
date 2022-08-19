#!/bin/bash

make
printf "\n"

prefix=primes.Primes
classes=(Brute Fast)

while IFS= read -r line
do
    for class in "${classes[@]}"
    do
        time java $prefix$class $line
        printf "\n"
    done
done < "input.txt"

exit 0
