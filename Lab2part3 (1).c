#include <stdio.h>//підключення бібліотек
#include<locale.h>
#include<math.h>
int t;// оголошення глобальної змінної
// оголошення функції
int main() {
int z,y; /* оголошення локальних
змінних */
setlocale (LC_CTYPE,"ua"); /*підключення
підтримки кирилиці української мови*/
printf("\n введіть перше число z="); /*
виведення даних*/
scanf("%d",&z);/*введення даних*/
printf("\n введіть друге число  y=");
scanf("%d",&y);
t=sqrt(3*(y/(z-2*y)))-y*z;
printf("z\t y\t t\t \n");
printf("%d\t%d\t%d\t \n",z,y,t);

return 0;}