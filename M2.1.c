#include <stdio.h>

// Функція для обчислення суми елементів масиву з непарними індексами
double computeSumWithOddIndices(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        if (i % 2 != 0) {
            sum += array[i];
        }
    }
    return sum;
}

// Функція для введення елементів масиву
void inputArray(double array[], int size) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &array[i]);
    }
}

// Функція для виведення елементів масиву
void printArray(double array[], int size) {
    printf("Масив: ");
    for (int i = 0; i < size; i++) {
        printf("%lf ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    double array[n];

    inputArray(array, n);
    printArray(array, n);

    double sum = computeSumWithOddIndices(array, n);

    printf("Сума елементів з непарними індексами: %lf\n", sum);

    return 0;
}