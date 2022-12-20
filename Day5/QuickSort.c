/**
 * @file QuickSort.c
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void displayArray(int arr[], int *n)
{
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int left, int right)
{
    int pivotPosition = right;
    int pivot = arr[pivotPosition];
    right--;
    while (true)
    {
        while (left <= right && arr[left] < pivot)
            left++;
        while (right >= left && arr[right] > pivot)
            right--;
        if (left >= right)
            break;
        swap(&arr[left], &arr[right]);
        left++;
        right--;
    }
    swap(&arr[left], &arr[pivotPosition]);
    return left;
}

void quickSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int pivotPosition = partition(arr, left, right);
    quickSort(arr, left, pivotPosition - 1);
    quickSort(arr, pivotPosition + 1, right);
}

int main()
{
    int arr[] = {34, 10, 12, 30, 19, 42, 9, 37, 56, 27, 32};
    int length = sizeof(arr) / sizeof(arr[0]);
    // partition(arr,0,length - 1);
    quickSort(arr, 0, length - 1);
    displayArray(arr, &length);
    return 0;
}
