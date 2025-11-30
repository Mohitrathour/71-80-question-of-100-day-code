//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[100][100], b[100][100], sum[100][100];
    int i, j;
    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &r2, &c2);

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if (r1 == r2 && c1 == c2) {
        
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Dimensions do not match. Addition not possible.\n");
    }

    return 0;
}