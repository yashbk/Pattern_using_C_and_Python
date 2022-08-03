#include <stdio.h>

void pattern(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", 1);
            }
            else
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}

int main()
{
    int num = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    pattern(num);
}