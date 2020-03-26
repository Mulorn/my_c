#include <stdio.h>
#include <time.h>
#define N 5
#define M 5
 int main() {
    int A[N][M], i, j, min = 0, max = 0, b;
    srand(time(NULL));

    for (j = 0; j < M; j++){
        for (i = 0; i < N; i++) {
            A[i][j] = rand() % 100;
            printf("%d ", A[i][j]);
            if (A[i][j] < A[min][j]) min = i;
            if (A[i][j] > A[max][j]) max = i;
            }
        printf("\n");
        b = A[min][j];
        A[min][j] = A[max][j];
        A[max][j] = b;
        }

        printf("\n\n");

        for(j = 0; j < M; j++){
            for (i=0; i<N; i++)
                printf("%d ", A[i][j]);
                printf("\n");
        }
return 0;
}
