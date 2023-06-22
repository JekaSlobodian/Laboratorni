#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int arr[], int n) {
    printf("Введіть %d елементів масиву:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int n) {
    printf("Елементи масиву: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int computeSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    int arr[MAX_SIZE];

    printf("Введіть розмір масиву (n): ");
    scanf("%d", &n);

    inputArray(arr, n);
    outputArray(arr, n);

    int sum = computeSum(arr, n);
    printf("Сума елементів масиву з непарними індексами: %d \n", sum);

    return 0;
}
