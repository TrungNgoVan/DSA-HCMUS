#include <stdio.h>

void delete(int arr[], int *n, int index){ // Function delete element in position "index"
    for (int i = index; i < *n - 1; i++){
        arr[i] = arr[i+1];
    }
    *n-=1;
    // (*n)--;
}

void printArray(int arr[], int n){ // Function print array
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10] = {1, 6 ,2, 8, 9};
    int n = 5;
    int index = 1;
    printArray(arr, n); // Array before delete
    delete(arr, &n, index); // Run delete
    printArray(arr, n); // Array after delete
    return 0;
}
