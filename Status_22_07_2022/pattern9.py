#!/usr/bin/python3

def pattern(row):
    num,odd = 1,1
    for i in range(row):
        for j in range(i+1):
            odd +=2
            print(num,end = " ")
            num += odd
        print()
            
            
pattern(int(input("Enter the number of rows: ")))