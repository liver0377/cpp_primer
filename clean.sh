#!/bin/bash

DIRS=(
    chapter1
    chapter2
    chapter3
    chapter4
    chapter5
    chapter6
    chapter7
    chapter8
    chapter9
    chapter10
    chapter11
    chapter12
)

for dir in ${DIRS[@]}; do
    rm ${dir}/*/main 2>/dev/zero
done