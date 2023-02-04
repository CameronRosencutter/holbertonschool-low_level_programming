#!/usr/bin/env bash
#Words

for ((i=1;i<=100;i++))
do
if ! ((i%15))
	then
	echo "FizzBuzz"
	elif ! ((i%3))
	then 
	echo "buzz"
	else
	echo "$i"
	fi
	done
