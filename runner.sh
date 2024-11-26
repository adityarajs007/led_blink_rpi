#!/bin/bash

# Navigate to the project directory
cd ~/projects/counter_project

# Pull the latest changes from the repository
git pull origin main

# Compile the code with updated structure
g++ -I./include src/main.cpp src/counter.cpp -o counter_app

# Run the compiled application in the Raspberry Pi terminal
DISPLAY=:0 lxterminal -e ./counter_app
