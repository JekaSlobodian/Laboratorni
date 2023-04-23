#include <stdio.h>//підключення бібліотек
#include<locale.h>
#include<math.h>
float y;// оголошення глобальної змінної
// оголошення функції
int main() {
int a,b,c; /* оголошення локальних
змінних */
setlocale (LC_CTYPE,"ua"); /*підключення
підтримки кирилиці української мови*/
 printf( " \nЗнайт значення функції y=((a+4*b-(pow(c,2)))/(2*a*b*c))) "); 
  printf("\n введіть перше число a=");
    scanf("%d",&a);
  printf("\n введіть перше число b=");
    scanf("%d",&b);
  printf("\n введіть перше число c=");
    scanf("%d",&c);
y=((a+4*b-(pow(c,2)))/(2*a*b*c));
printf("a\t b\t c\t y\t \n");
printf("%d\t%d\t%d\t%.2lf\n",a,b,c,y );
printf(" Відповідь y=% .2lf\t", y);
return 0;}
