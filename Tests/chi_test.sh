#!/bin/bash

# Step 1: Compile the student's main.cpp file
echo "Compiling main.cpp..."
g++ main.cpp -o student_program

# Step 2: Check if the compilation was successful
if [ $? -ne 0 ]; then
   echo "Compilation failed."
   exit 1
fi
echo "Compilation successful."
