/**
 * @file InsertionSort.c
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n){
    int temp, position;
    for (int i = 1; i < n; i++){
        temp = arr[i];
        position = i;
        while (position >= 0 && arr[position - 1] > temp){
            arr[position] = arr[position - 1];
            position--;
        }
        arr[position] = temp;
    }
}

int main(){
    int arr[6] = {1, 6, 3, 23, 4, 19};
    int n = 6;
    displayArray(arr, n);
    insertionSort(arr,n);
    displayArray(arr, n);
    return 0;
}
