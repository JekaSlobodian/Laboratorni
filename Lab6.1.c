#include <stdio.h>
void s(int mat[][100], int n, int m) {
    int half = m / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < half; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][j + half];
            mat[i][j + half] = temp;
        }
    }
}
int main() {
    int n, m;
    printf("Введіть розмір матриці (n , m): ");
    scanf("%d %d", &n, &m);
    int mat[100][100];
    printf("Введіть елементи матриці:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Матриця до зміни половинок:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    s(mat, n, m);
    printf("Матриця після зміни половинок:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}