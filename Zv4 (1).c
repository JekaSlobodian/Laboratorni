#include <locale.h>
#include <math.h>
#include <stdio.h> //підключення бібліотек
float f;
int main() {
  int x, y;
  setlocale(LC_CTYPE, "ua");
  printf("\n введіть  число x=");
  scanf("%d", &x);
  printf("\n введіть  число y=");
  scanf("%d", &y);
  f = (pow(x, 2) + pow(y, 2)) / sqrt(x + y);
  if (x + y < 0) {
    printf("не має відповіді");
    return 0;
  }
  printf("x \t y \t  f \t \n ");
  printf("%d\t%d\t%.2f\t", x, y, f);
  printf("\n Відповідь   f= %.2f \t", f);
  return 0;
}