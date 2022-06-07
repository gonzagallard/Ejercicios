#!/bin/bash

echo -n 'Nombre del archivo: '
read file

gcc -Wall -std=c99 -pedantic -g ${file}.c -o ${file} 
