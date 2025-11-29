#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[100][100];
    int isSymmetric = 1; 
    scanf("%d %d", &r, &c);
    if (r != c) {
        printf("False");
        return 0;
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (isSymmetric == 0) 
        break; 
    }
    if (isSymmetric) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}