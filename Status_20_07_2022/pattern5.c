#include <stdio.h>

void pattern(int row)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

int main()
{
    int num = 0;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    pattern(num);
}