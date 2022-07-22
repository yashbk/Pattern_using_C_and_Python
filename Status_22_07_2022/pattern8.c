#include <stdio.h>

void pattern(int row)
{
    int num = 0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i ;j++)
        {
            num++;
            printf("%d ",num);
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