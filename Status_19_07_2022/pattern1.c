#include <stdio.h>

void pattern(int row)
{
    int i = 1, j = 0;
    while (i <= row)
    {
        j = i;
        while (j--)
        {
            printf("*");
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