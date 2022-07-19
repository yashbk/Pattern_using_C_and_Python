#!/usr/bin/python3

from re import I


def pattern(row):
    i,j = 1,0
    while i <= row:
        j = i 
        while j != 0:
            print("*",end = "")
            j -=1
        print()
        i += 1
    
    
pattern(int(input("Enter the number of rows: ")))
        