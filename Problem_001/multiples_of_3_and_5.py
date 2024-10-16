#!/bin/python3
import sys

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    n3 = (n - 1) // 3
    n5 = (n - 1) // 5
    n15 = (n - 1) // 15
    sumn3 = 3 * n3 * (n3 + 1) // 2
    sumn5 = 5 * n5 * (n5 + 1) // 2
    sumn15 =15 * n15 * (n15 + 1) // 2
    print(sumn3 + sumn5 - sumn15)