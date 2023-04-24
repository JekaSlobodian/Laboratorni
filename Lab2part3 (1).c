
#include <stdio.h>//підключення бібліотек
#include<locale.h>
#include<math.h>
float t;// оголошення глобальної змінної
// оголошення функції
int main() {
int z,y; /* оголошення локальних
змінних */
setlocale (LC_CTYPE,"ua"); /*підключення
підтримки кирилиці української мови*/
 printf( "\nЗнайт значення функції t=sqrt(3*(y/(z-2*y)))-y*z "); 
  printf("\n введіть перше число z=");
    scanf("%d",&z);
  printf("\n введіть перше число y=");
    scanf("%d",&y);
t=sqrt(3*(y/(z-2*y)))-y*z;
printf("z\t y\t t\t \n");
printf("%d\t%d\t%.2lf\t \n",z,y,t );
printf(" Відповідь t=  %.2lf\t",t);
return 0;}
