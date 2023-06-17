#include <stdio.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int array[n];

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Масив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Знайти добуток від'ємних елементів масиву
    int negative_product = 1;
    int has_negative = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            negative_product *= array[i];
            has_negative = 1;
        }
    }

    if (has_negative) {
        printf("Добуток від'ємних елементів: %d\n", negative_product);
    } else {
        printf("В масиві немає від'ємних елементів.\n");
    }

    // Знайти суму елементів масиву, розташованих після мінімального елемента
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (array[i] < array[min_index]) {
            min_index = i;
        }
    }

    int sum = 0;
    for (int i = min_index + 1; i < n; i++) {
        sum += array[i];
    }

    printf("Сума елементів після мінімального елемента: %d\n", sum);

    return 0;
}