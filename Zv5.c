#include <locale.h>
#include <math.h>
#include <stdio.h> //підключення бібліотек
float g, s;
int main() {
  int x, y;
  setlocale(LC_CTYPE, "ua");
  printf("\n введіть довжину першого катета  x=");
  scanf("%d", &x);
  printf("\n введіть довжину другого  катета y=");
  scanf("%d", &y);
  g = sqrt(x * x + y * y);

  if (x < 0 || y < 0) {
    printf("Такого тркутника не існує");
    return 0;
  }
  s = (0, 5) * x * y * sin(90);
  printf(" x\ty \t   \n ");
  printf("%d\t%d\t", x, y);
  printf("\n Гіпотенуза     %.2f \t ", g);
  printf("\n Площа трикутника %.2f ", s);
  return 0;
}