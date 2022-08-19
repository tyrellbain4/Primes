#!/bin/bash

log=log.txt

printf "Executing all prime algorithms...\n" > $log

cd C
./shell.sh $1
sleep 1

cd ../Java/primes
./shell.sh
sleep 1

cd ../..
printf "All prime algorithms successfully executed.\n" >> $log
exit 0
