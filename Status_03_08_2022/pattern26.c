#include <stdio.h>

void pattern(int row)
{
    char alpha = 'a';
    int odd = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c ", alpha);
            }
            else
            {
                printf("%d ", odd);
            }
        }
        alpha += 1;
        odd += 1;
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