#include <stdio.h>
// Function insert number in ordered array
void insertOrderedArray(int arr[], int *sizeArray, int value)
{
    int index = *sizeArray - 1;
    while (index >= 0 && arr[index] >= value)
    {
        arr[index + 1] = arr[index];
        index--;    
    }
    arr[index + 1] = value;
    (*sizeArray)++;
    return;
}
//Function print array
void printArrary(int arr[], int sizeArray)
{
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    //TODO: Generate ordered array
    int arr[6] = {2, 3, 5, 6, 7};
    int value = 9;
    int n = 5;
    //TODO: Solution
    printArrary(arr,n); // Array before insert
    insertOrderedArray(arr, &n, value); // Run function insert 
    printArrary(arr,n); // Array after insert
    return 0;
}
