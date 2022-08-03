#include <stdio.h>

void pattern(int row)
{
    int i=1,j=0,num = 0;
    while(i<=row)
    {
        j = 0;
        while(j<i)
        {
            printf("%d ", num);
            num +=2;
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int num = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    pattern(num);
}