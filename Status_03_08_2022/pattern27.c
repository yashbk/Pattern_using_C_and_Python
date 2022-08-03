#include <stdio.h>

void pattern(int row)
{
    int a = 0, b = 1, c = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", c = a + b);
            a = b;
            b = c;
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