#!/usr/local/bin/python3

from sys import stderr

for y in range(20):
	for x in range(20):
		if y == 0 or y == 19 or x == 0 or x == 19:
			print(1, end="")
		else:
			print(0, end="")
	print()
print("\033[1;32mMap Generated\033[0m", file=stderr)