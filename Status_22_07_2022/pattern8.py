#!/usr/bin/python3

def pattern(row):
    num = 1
    for i in range(row):
        for j in range(i+1):
            print(num,end = " ")
            num +=1
        print()
            
            
pattern(int(input("Enter the number of rows: ")))