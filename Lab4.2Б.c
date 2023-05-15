#include <stdio.h>

int main() {
    double dob= 1;
    int num = 10;

    while (num <= 60) {
        if (num % 3 == 0) {
            dob *= num;
        }
        num++;
    }

    printf("Добуток фсіх чисел кратних 3 в діапазоні (10;60)=%.lf", dob);
    return 0;
}
