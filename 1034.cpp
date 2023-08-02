// Please declare an integer array with 5 cells
// After entering the content of this 5 grid array
// Print out the contents of the array (integer numbers) in sequence followed by a tab (\t) to print out the number of numbers *

#include<stdio.h>

int main() {
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
        
        printf("%d\t%s\n",A[i],"*");
    }
    
    return 0;
}