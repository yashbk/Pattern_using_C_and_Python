//Program to reverse bytes of an integer
#include <stdio.h>

int main()
{
    char temp = 0;  
    int num = 0x12345678;
    printf("Before reversing num: %x\n",num);
    char *low = (void *)&num;
    char *high = low + sizeof(int)-1;
    while(high > low)
    {
        temp = *low;
        *low = *high;
        *high = temp;
        high--; low++;
    }
    printf("After reversing num:  %x\n",num);
}