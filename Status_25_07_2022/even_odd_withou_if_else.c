//WAP to find even or odd without using if else

#include <stdio.h>
#define even(num) (num % 2 == 0) ? printf("Even\n") : printf("Odd\n")

int main()
{
    int num = 0;
    printf("Enter number to know whether it is even or not: ");
    scanf("%d", &num);
    //Using ternary
    // num%2==0?printf("Even\n"):printf("Odd\n");

    //Using ternary and macro
    // even(num);

    //Using switch
    // switch (num % 2)
    // {
    // case 0:
    //     printf("Even\n");
    //     break;
    // default:
    //     printf("Odd\n");
    // }

    //Using while
    // while(num%2==0)
    // {
    //     printf("Even\n");
    //     break;
    // }
    // while(num%2!=0)
    // {
    //     printf("Odd\n");
    //     break;
    // }

    //Using for
    for(;num%2==0;)
    {
        printf("Even\n");
        break;
    }
    for(;num%2!=0;)
    {
        printf("Odd\n");
        break;
    }
}