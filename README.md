# Little-Red-Riding-Hood


[Part 2 of this project](https://github.com/mlund2k/Little-Red-Riding-Hood-Part-2)


The following program implements classes and objects of type Person, Thing, Location, Time, and 
Record to describe the following chronological events laid throughout the Little Red Riding Hood 
story:


1. Little Red Riding Hood wore the Cap
2. Her mom gave her the cake and wine
3. Little Red met the wolf at a particular spot in the wood
4. Grandma was at her own home right outside of the wood and there were three large oak trees 
nearby


This program was compiled using WSL (Windows Subsystem for Linux) on Windows 10 and 11 and runs perfectly in such environments.
The program can be run through the terminal using the 'make' command to build and './hw2' to
run the program. If the 'make' command is not properly building, try 'make clean' and then 'make' 
again.
If compiling raises a fatal error on ```#include <json/json.h>```, make sure to run the following commands to install json on your computer:
```sudo apt-get install libjsoncpp-dev```
```sudo ln -s /usr/include/jsoncpp/json/ /usr/include/json```
Credits: https://github.com/stardust95/TinyCompiler/issues/2#issuecomment-410946235
