#! /usr/bin/bash

g++ unit/*.cpp -std=c++0x -c -Wall
g++ ability/*.cpp -std=c++0x -c -Wall
g++ state/*.cpp -std=c++0x -c -Wall
g++ spellcaster/*.cpp -std=c++0x -c -Wall
g++ interface/*.cpp -std=c++0x -c -Wall
g++ spell/*.cpp -std=c++0x -c -Wall
g++ main.cpp *.o -std=c++0x -Wall
