#!/usr/bin/python3

def pattern(row):
    alpha = 'a'
    for i in range(1,row+1):
        for j in range(i):
            print(alpha,end = '')
        print()
        alpha = chr(ord(alpha) + 1)  #ord gives the ascii value of character
        
        
pattern(int(input("Enter the number of rows: ")))