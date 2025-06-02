#include <stdio.h>

void pushZerosToEnd(int *arr, int n)
{
    int count = 0, temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            // swap
            temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;

            count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}