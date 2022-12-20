#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Function swap two number
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Function bubble sort 
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

//Function print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    //Generate random number array
    time_t t;
    srand((unsigned) time(&t)); 
    int n = 50, sizeArr = rand() % 20;
    int arr[100];
    for (int i = 0; i < sizeArr; i++){
        arr[i] = rand() % n;
    }
    // Print array before sort
    printArray(arr, sizeArr);
    // Run bubble sort
    bubbleSort(arr, sizeArr);
    // Print array after sort
    printArray(arr, sizeArr);
    return 0;
}
