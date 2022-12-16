#include <stdio.h>

void insert(int arr[], int *n, int value, int index){
    for (int i = *n; i > index; i--){
            arr[i] = arr[i-1];
    }
    arr[index] = value;
    *n;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[10] = {1, 6 ,2, 8, 9};
    int n = 5;
    int value = 7, index = 4;
    insert(arr, &n, value, index);
    printArray(arr, n);
    return 0;
}
