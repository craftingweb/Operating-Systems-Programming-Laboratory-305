#!/bin/sh

PROG1="main";
# 75 Second Program
# g++ compilation
success=$(g++ $PROG1.cpp -o  $PROG1)
# Check if compilation not fails
if [ $success == ""]
then
    echo "75seconds $PROG1 Program  Running";    # echo output
    time $(./$PROG1);          # timing the program
else
    echo $success;
fi

