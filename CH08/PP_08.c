#include <stdio.h>
#define N 5

int main(void) {

    int matrix[N][N];

    for (int row = 0; row < N; row++) {

        printf("Enter %d quiz grades: ", row + 1);
        
        for (int col = 0; col < N; col++) {
            scanf("%d", &matrix[N][N]);
        }
    }

    int total_student_scores[N] = {0};
    float average_student_scores[N] = {0};
    
    int quiz_totals[N] = {0};
    int high_quiz[N] = {-1, -1, -1, -1, -1};
    int low_quiz[N] = {101, 101, 101, 101, 101};

    float average_quiz_scores[N];

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            total_student_scores[i] += matrix[i][j];
            quiz_totals[j] += matrix[i][j];

            if (matrix[i][j] > high_quiz[j]) {
                high_quiz[j] = matrix[i][j];
            }

            if (matrix[i][j] < low_quiz[j]) {
                low_quiz[j] = matrix[i][j];
            }
        }
        average_student_scores[i] = (float) total_student_scores[i] / N;
    }

    for (int i = 0; i < N; i++) {
        average_quiz_scores[i] = (float) quiz_totals[i] / N;
    }

    printf("\nPer Quiz Results\n");
    for (int i = 0; i < N; i++) {
       printf("Quiz %d\n", i + 1);
       printf("Average = %f\n", average_quiz_scores[i]);
       printf("High = %d\n", high_quiz[i]);
       printf("Low = %d\n", low_quiz[i]);
    }
    
    printf("\nPer Student Results\n");
    for (int i = 0; i < N; i++) {
       printf("Student %d\n", i + 1);
       printf("Average = %f\n", average_student_scores[i]);
       
    }
}