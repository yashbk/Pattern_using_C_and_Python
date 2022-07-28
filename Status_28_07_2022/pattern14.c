#include <stdio.h>

void pattern(int row)
{
    char alpha = 'a';
    for (int i = 1; i <= row; i++)
    {
        alpha = 'a';
        for (int j = 0; j < i; j++)
        {
            printf("%c ", alpha);
            alpha++;
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