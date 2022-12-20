#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int middle, step = 0;


int binarySearch(int arr[], int target, int left, int right){
    while (left <= right)
    {
        middle = (right + left) / 2;
        if (arr[middle] == target) {
            return middle;
        }
        else if (arr[middle] < target) {
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
    int target = 2;
    int res = binarySearch(arr, target, left, right);
    if (res == -1){
        printf("Not found \n");
    }
    else {
        printf("Index of target is %d \n", res);
    }
    return 0;
}
