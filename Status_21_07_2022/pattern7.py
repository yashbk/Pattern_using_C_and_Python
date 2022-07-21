#!/usr/bin/python3

def pattern(row):
    i = 1
    while (i <= row):
        j = i
        while(j > 0):
            print(row-j+1,end = " ")
            j -=1
        i +=1
        print()

pattern(int(input("Enter the number of rows: ")))