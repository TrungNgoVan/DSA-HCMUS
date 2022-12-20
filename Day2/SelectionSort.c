#include <stdio.h>
#include <stdlib.h>

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    int position, temp;
    for (int i = 0 ; i < n - 1; i++){
        position = i;
        temp = arr[i];
        for (int j = i + 1; j < n; j++){
            if (arr[j] < temp){
                temp = arr[j];
                position = j;
            }
        }
        swap(&arr[i], &arr[position]);
    }
}

int main(){
    int arr[6] = {1, 6, 3, 23, 4, 19};
    int n = 6;
    displayArray(arr, n);
    selectionSort(arr,n);
    displayArray(arr, n);
    return 0;
}
