#include <stdio.h>

void pattern(int row)
{
    int i = 0, j = 0, k = 0;
    while (i <= row)
    {
        j = i + 1;
        k = i;
        while (j)
        {
            printf("%d ", k);
            k = -k;
            j--;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int num = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    pattern(num);
}