#!/usr/bin/env bash

g++ -o $2 $1 -O2 -L/usr/X11R6/lib -lm -lpthread -lX11
