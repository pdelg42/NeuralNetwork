#!/usr/local/bin/python3

from sys import argv
from re import *

print("\033[1;34m", end="")
for a in argv[1:]:
	print(a.split("/")[-1])

print("\033[0m", end="")