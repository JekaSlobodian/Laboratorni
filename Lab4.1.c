#include <stdio.h>//підключення бібліотек
#include <locale.h>
#include <math.h>
float a;
int main() { 
  int x,y,z;
  int i = 1;
    while (i)
    {
        printf("Задайте число x: ");
        scanf("%d", &x);
        printf("Задайте число y: ");
        scanf("%d", &y);
        printf("Задайте число z: ");
        scanf("%d", &z);
        if ( (pow(x, 2) * y < (14 * z)))
        {
            printf("Невірно введені числа. Будь ласта, введіть інші (вірні) числа.\n");
        }
        else
        {
            i = 0;
        }
    }
    a = sqrt(pow(x, 2) * y - (14 * z));
    printf("Обчислення: %.2lf\n", a);
return 0;
           }
