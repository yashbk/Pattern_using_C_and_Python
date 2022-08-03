#include <stdio.h>

void pattern(int row)
{
    int num = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", num);
            if (num < 0)
            {
                num = (-num)+ 1;
                num = -num;
            }
            else
            {
                num++;
            }
            num = -num;
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