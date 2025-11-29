#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int r, c, k;
    int a[100][100];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (k = 0; k < r + c - 1; k++) {
        if (k % 2 == 0) {
            int i = min(k, r - 1);
            int j = k - i;
            while (i >= 0 && j < c) {
                printf("%d ", a[i][j]);
                i--; 
                j++; 
            }
        } 
        
        else {
            int j = min(k, c - 1);
            int i = k - j;
            while (j >= 0 && i < r) {
                printf("%d ", a[i][j]);
                i++; 
                j--; 
            }
        }
    }

    return 0;
}