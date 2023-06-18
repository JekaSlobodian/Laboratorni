#include <stdio.h>

#define MAX_SIZE 100

// Функція для обчислення значення елементів матриці C[i, j]
int computeC(int i, int j) {
    if (i < j) {
        return i + j;
    } else {
        return i * i - j * j;
    }
}

// Функція для введення елементів матриці
void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Введіть елементи матриці:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Функція для виведення елементів матриці
void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Матриця:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");

    }
}

int main() {
    int n, m;
    printf("Введіть кількість рядків матриці: ");
    scanf("%d", &n);
    printf("Введіть кількість стовпців матриці: ");
    scanf("%d", &m);

    if (n <= 0 , m <= 0 , n > MAX_SIZE || m > MAX_SIZE) {
        printf("Неприпустимі розміри матриці.\n");
        return 0;
    }

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, n, m);
    printMatrix(matrix, n, m);
    int x = computeC(n,m);
    printf("\nC[i,j] = %d ", x);
    printf("\n");
    return 0;
}