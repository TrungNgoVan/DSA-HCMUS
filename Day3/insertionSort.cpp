#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long countSwap = 0, swaps;
int count[46];

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d \n", i, arr[i]);
    }
    printf("\n");
}

void generate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (5 * n);
    }
}

void swap(int *a, int *b)
{
    swaps++;
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int end = n - 1; end > 0; end--)
    {
        for (int i = 0; i < end; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

int main()
{
    srand((int)time(0));
    int arr[11];
    int n = 6;
    int trials = 1000;
    for (int t = 0; t < trials; t++)
    {
        generate(arr, n);
        swaps = 0;
        bubbleSort(arr, n);
        countSwap += swaps;
        count[swaps]++;
    }
    printArray(count, 16);
    printf("Swap average: %f", (countSwap * 1.0) / trials);
    return 0;
}
