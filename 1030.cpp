// Please declare an integer array with 5 cells
// After inputting the content of the 5-grid array, it will be printed out in the order of input

#include<stdio.h>

int main() {
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
        
        printf("%d\n",A[i]);
    }
    
    return 0;
}