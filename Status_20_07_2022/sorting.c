#include <stdio.h>

void bubble_sort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                arr[j + 1] = arr[j + 1] ^ arr[j];
                arr[j] = arr[j + 1] ^ arr[j];
                arr[j + 1] = arr[j + 1] ^ arr[j];
            }
        }
    }
}

void insertion_sort(int *arr, int len)
{
    int key = 0;
    int j = 0;
    for (int i = 0; i < len - 1; i++)
    {
        key = arr[i + 1];
        for (j = i; (key < arr[j]) && (j >= 0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[++j] = key;
    }
}

void selection_sort(int *arr, int len)
{
    int min = 0;
    int temp = 0;
    int j=0;
    for (int i = 0; i < len-1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 56, 4, 3, 2, 4, 455, 2, 2};
    int len = sizeof(arr) / sizeof(int);
    // bubble_sort(arr,len);
    //  insertion_sort(arr,len);
    selection_sort(arr, len);
    print(arr, len);
}