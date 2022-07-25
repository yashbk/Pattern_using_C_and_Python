#include <stdio.h>

void pattern(int row)
{
    int i=1,j=0,k=1;
    while(i<=row)
    {
        j = i;
        while(j--)
        {
            if(i%2!=0)
            {
                printf("%d",k);
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        if(i++%2!=0)
            k++;
    }
}

int main()
{
    int num = 0;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    pattern(num);
}