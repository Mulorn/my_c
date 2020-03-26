#include <stdio.h>
#include <limits.h>
#define N 5
#define M 5
int main() {
    int a[N][M]= {{1, 3, 6, 9, 5}, {24, -72, -34, 12, 1}, {21, 13, 44, -9, 2}, {41, -2, 1, 15, -2}, {23, -52, 12, 67, -90}}, i, j, min = CHAR_MAX;;
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            printf("%5d", a[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    for (j=0; j<M; j++) {
        min = a[0][j];
        for (i=1; i<N; i++)
            if (a[i][j] < min)
                if (a[i][j]>0)
                    min = a[i][j];
        printf("%5d", min);
    }
    printf("\n");

    return 0;
}
