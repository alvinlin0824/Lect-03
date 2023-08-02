// Enter the scores of 3 students in the class and find their average
// Print out the numbers and scores of students who failed (if there are no students who failed, it will also print fail:)

#include<stdio.h>

int main() {
    int A[3];
    for (int i = 0; i < 3; i++)
        {
        scanf("%d",&A[i]);
        }
    // average 
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += A[i];
    }
    double average = (double)sum/3;
    printf("avg = %.2f\n",average);

    // Fail
    printf("fail:\n");
    for (int i = 0; i < 3; i++)
    { 
        if(A[i] < 60) {
            printf("%d: %d\n",i+1,A[i]);
        }
    }

    return 0;
}