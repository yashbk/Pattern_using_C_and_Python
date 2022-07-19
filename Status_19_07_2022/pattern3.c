#include <stdio.h>

void pattern(int row)
{
    int i = 0, j = 0;
    while (i < row)
    {
        j = i+1;
        while (j--)
        {
            printf("%d",row-i);
        }
        printf("\n");
            i++;
    }
}

int main()
{
    int num = 0;
    printf("Enter the number of rows:\n");
    scanf("%d", &num);
    pattern(num);
}