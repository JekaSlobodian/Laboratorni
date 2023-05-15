#include <stdio.h>

int main() {
    double dob = 1;
    int num = 10;

    do {
        if (num % 3 == 0) {
            dob *= num;
        }
        num++;
    } while (num <= 60);

    printf("Добуток фсіх чисел кратних 3 в діапазоні (10;60)= %f", dob);
    return 0;
}
