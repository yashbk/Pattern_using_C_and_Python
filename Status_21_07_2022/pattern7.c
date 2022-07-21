#include <stdio.h>

void pattern(int row)
{
    int i = 0;
    while(i<row)
    {
        int j = i;
        while(j >=0)
        {
            printf("%d ",row - j--);
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int num = 0;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    pattern(num);
}