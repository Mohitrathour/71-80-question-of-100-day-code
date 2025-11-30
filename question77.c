//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[100][100];
    int isDistinct = 1; 
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int min_dim = (r < c) ? r : c;
    for (i = 0; i < min_dim; i++) {
        for (j = i + 1; j < min_dim; j++) {
            if (a[i][i] == a[j][j]) {
                isDistinct = 0; 
                break;
            }
        }
        if (isDistinct == 0) break; 
    }
    if (isDistinct) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}