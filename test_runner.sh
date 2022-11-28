#!/bin/bash

make clean
make
./TicTacToeBoardTest
gcov -b TicTacToeBoard.cpp