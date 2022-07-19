#!/usr/bin/python3

def pattern(row):
    i,j = 0,0
    while i < row:
        j = i+1
        while j:
            print(row-i,end = '')
            j -= 1
        print()
        i += 1
        
pattern(int(input("Enter the number of rows: ")))