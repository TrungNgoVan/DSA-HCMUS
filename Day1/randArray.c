#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time(&t)); 
    int n = 20, sizeArr = rand() % n;
    int arr[100];
    for (int i = 0; i < sizeArr; i++){
        arr[i] = rand() % n;
    }
    for (int i = 0; i < sizeArr; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
