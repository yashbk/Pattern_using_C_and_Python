#include <stdio.h>

void pattern(int row)
{
    int num = 1,table = num;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", table);
            table += num;
        }
        num++;
        table = num;
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