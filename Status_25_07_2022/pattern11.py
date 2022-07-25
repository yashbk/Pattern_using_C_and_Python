#!/usr/bin/python3

def pattern(row):
    i,j,k = 0,0,0
    while i < row:
        j = i+1
        k = i
        while j:
            print(k," ",end = '')
            k = -k
            j -= 1
        print()
        i += 1
        
        
pattern(int(input("Enter the number of rows: ")))
