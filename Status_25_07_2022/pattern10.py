#!/usr/bin/python3

def pattern(row):
    i,j,k = 1,0,1
    while i <= row:
        j = i
        while j:
            j -=1
            if i%2 ==0:
                print("*",end = "")
            else:
                print(k,end = '')
        print()
        i +=1
        if i%2!= 0:
            k +=1
        
pattern(int(input("Enter the number of rows: ")))
