    /**
     * @file Recursion.c
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

    void countDown(int n){
        if (n == 0) return;
        else{
            printf("%d\n", n);
            countDown(n - 1);
        }
    }

    int factorial(int n){
        if (n == 1) return 1;
        else return n * factorial(n - 1);
    }

    int main(){
        // countDown(10);
        printf("%d", factorial(5));
        return 0;
    }
