#include <stdio.h>

int main() {
    double dob = 1;
    int num;

    for (num = 12; num <= 60; num += 3) {
        dob *= num;
    }

    printf("Добуток фсіх чисел кратних 3 в діапазоні (10;60)=%.lf", dob);
    return 0;
}
