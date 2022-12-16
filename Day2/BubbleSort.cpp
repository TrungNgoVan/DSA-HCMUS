#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int arr[], int sizeArr){

}

void printArray(int arr[], int sizeArr){

}

int main(int argc, char **argv)
{
    //TODO: Generate random number array
    time_t t;
    srand((unsigned) time(&t)); 
    int n = 50, sizeArr = rand() % 20;
    int arr[100];
    for (int i = 0; i < sizeArr; i++){
        arr[i] = rand() % n;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    // Array before run BubbleSort
    BubbleSort(arr, n);

    return 0;
}
