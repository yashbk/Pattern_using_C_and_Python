#include <stdio.h>

void pattern(int row)
{
    char alpha = 'a' + row - 1;
    for (char i = 1; i <= row; i++)
    {
        char k = alpha - i +1;
        while(k <= alpha)
        {
            printf("%c ",k);
            k++;
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