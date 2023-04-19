#include <stdio.h>//підключення бібліотек
#include<locale.h>
#include<math.h>
int g,s,d;// оголошення глобальної змінної
// оголошення функції
int main() {
int a,b; /* оголошення локальних
змінних */
setlocale (LC_CTYPE,"ua"); /*підключення
підтримки кирилиці української мови*/
printf("\n введіть перше число a="); /*
виведення даних*/
scanf("%d",&a);/*введення даних*/
printf("\n введіть друге число  b=");
scanf("%d",&b);
g =  a/b;
s = pow(a,2)+pow(b,2);
d =(a+b)*(a-b);
printf("a \t b \t g \t s\t d\t \n");
printf("%d\t%d\t%d\t%d\t%d",a,b,g,s,d);
return 0;}