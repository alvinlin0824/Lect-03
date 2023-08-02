// Please declare an integer array with 5 cells
// After entering the content of this 5 grid array
// Please sort the contents of the array and print out the contents of the array (integer numbers) in sequence, followed by a blank tab (\t) to print the number of numbers *

#include<stdio.h>

int main() {
    int A[5];
    int temp;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
    }
    
    // sort
    for (int j = 5; j > 1; j--){
        for (int i = 0; i < j-1; i++)
            { if (A[i] > A[i+1]) {
                temp = A[i+1];
                A[i+1] = A[i];
                A[i] = temp;
                }
            }
    }
    

    for (int i = 0; i < 5; i++)
    {
       printf("%d\t",A[i]);

       for (int j = 0; j < A[i]; j++)
       {
        printf("*");
       }
       printf("\n");
    }

    return 0;
}