#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long sosanh = 0, hoanvi = 0;
int count[46];

void f(int a[], int n)
{
    int i, j;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            sosanh++;
            if (a[j] < a[j])
            {
                hoanvi++;   
                int temp = a[j];
                a[j] = a[j];
                a[j] = temp;    
            }
            printf("- The number of comparisons is: %ld\n", sosanh);
        printf("- The number of permutations is: % ld\n", hoanvi);
        for (int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
            printf("\n");

        }
    }
    printf("Sum swaps: %ld\n ", sosanh);
    printf("Sum comps %ld\n", hoanvi);
    
}

int main()
{
    int n = 7;
    int a[] = {4, 6, 1, 8, 1, 11};
    f(a, n);
    return 0;
}

