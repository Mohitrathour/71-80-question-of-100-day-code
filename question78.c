#include <stdio.h>

int main() {
    int n, m, i, j;
    int a[100][100];
    int sum = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }
    printf("%d", sum);

    return 0;
}