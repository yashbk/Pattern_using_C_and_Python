#include <stdio.h>

void pattern(int row)
{
    int num = 1,odd = 1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",num);
            odd = odd+2;
            num = num + odd;
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