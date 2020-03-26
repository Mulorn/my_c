#include <limits.h>
#include <time.h>
#define N 5
#define M 5
main() {
    int A[N][M], i, j, min = CHAR_MAX;
    srand(time(NULL));

    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            A[i][j] = rand() % 100;
            printf("  %d  ", A[i][j]);
        }
        printf("\n");
    }

    printf("Minimalnie \n");

    for (j = 0; j < M; j++) {
        min = A[0][j];
        for (i = 1; i < N; i++)
            if (A[i][j] < min)
                min = A[i][j];
        printf("  %d  ", min);
    }
    printf("\n");
    return 0;
}
