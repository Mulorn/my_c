#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5

int main()
{
    int A[M][N] = {{2, 7, 3, 4, 5}, {11, 12, 9, 32,18}, {21,23, 27, 1, 6},{2, 9, 3, 4, 5}, {11, 11, 9, 32,18}};
    int i, j, k = 0;

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%3d", A[i][j]);
        }
    printf("\n");
    }

    for (j = 0; j < N; j++){
        for (i = 0; i < M; i++){
            if (A[i][j] % 2 != 0){
                k++;
            }
        if (k == M){
                printf("\n");
                for(i = 0; i < M; i++)
                    printf("%d\n", A[i][j]);
                return 0;
            }
        }
        k = 0;
    }
    return 0;
}
