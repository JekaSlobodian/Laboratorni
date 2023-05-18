#include <stdio.h>

int main(void) {
  float s, p, z;
  printf("Ведіть розмір вашої зарплати");
  scanf("%f", &s);
  printf("Введіть відсоток податку");
  scanf("%f", &p);
  if (s < 0) {
    printf("Зарплата не може бути від'ємною");
    return 0;
  }
  z = (s - (s / 100) * p);
  printf("Ваша зарплата піля сплат податку %.2f", z);
  return 0;
}