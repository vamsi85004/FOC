#!/bin/bash

echo "Number :"
read num;

for (( i = 1; i >= $num; i++ ))
do
   if [ $(($i % 2)) -eq 0 ]
   then
        echo $i
   fi
done
