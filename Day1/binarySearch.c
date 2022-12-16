#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int middle, step = 0;

void check(int *count){
    (*count)++;
}

int binarySearch(int arr[], int target, int left, int right){
    while (left <= right)
    {
        check(&step);
        middle = (right + left) / 2;
        if (arr[middle] == target) {
            check(&step);
            return middle;
        }
        else if (arr[middle] < target) {
            check(&step);
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return -1;
    
}

int main(){
    int arr[6] = {2, 3, 5, 6, 7};
    int n = 5;
    int left = 0, right = n - 1;
    int target = 1, res = binarySearch(arr, target, left, right);
    if (res == -1){
        printf("Not found \n");
    }
    else {
        printf("Index of target is %d \n", res);
    }
    printf("step of algorithm is %d ", step);
    return 0;
}
