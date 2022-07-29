#include <stdio.h>

void pattern(int row)
{
    char alpha;
    for (int i = 1; i <= row; i++)
    {
        alpha = 'a' + row - 1;
        int k = i;
        while(k)
        {
            printf("%c ",alpha--);
            k--;
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