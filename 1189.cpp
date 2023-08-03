// Enter 1 integer N as the number of students in the class (0<N<=1000)
// Then input the scores of N students in the class (0<=score<=100), and find their average
// Print out the seat number (counting from 1) and score of the failed students (if there are no failed students, it will also print fail:)
// Print out the score and seat number of the student with the highest score (counting from 1). If there are more than one with the highest score, please print the first one

#include<stdio.h>

int main() {
    
    //  Number of Students
    int N;
    scanf("%d",&N);

    int A[N];
    for (int i = 0; i < N; i++)
        {
        scanf("%d",&A[i]);
        }
    // average 
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    double average = (double)sum/N;
    printf("avg = %.2f\n",average);

    // Fail
    printf("fail:\n");
    for (int i = 0; i < N; i++)
    { 
        if(A[i] < 60) {
            printf("%d: %d\n",i+1,A[i]);
        }
    }
    
    // highest
    printf("highest:\n");
    int max_score = A[0];
    for (int i = 0; i < N; i++) {
        if (A[i] > max_score) {
            max_score = A[i];
        }
    }

    // find index
    int index;
    for (int i = 0; i < N; i++) {
        if (A[i] == max_score) {
            index = i;
            break;
        }
    }
    
    printf("%d: %d\n",index + 1,max_score);
    return 0;
}