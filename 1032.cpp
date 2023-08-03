// Input five integers and print out the results from small to large
// For example:
// Input: 34 12 5 66 1
// Output: 1 5 12 34 66 (a blank must be added after each number)
// Bubble Sort
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
       printf("%d ",A[i]);
    }
    
    return 0;
}