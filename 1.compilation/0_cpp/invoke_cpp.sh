#!/bin/bash

#see the output first by invoking cpp
cpp -P double.pytxt

#
echo -e "\ninvoking python3 ...\n"
cpp -P double.pytxt | python3


#example gcc -E main.c
gcc -E main.c