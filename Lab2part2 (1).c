#include <stdio.h>//підключення бібліотек
#include<locale.h>
#include<math.h>
float y;// оголошення глобальної змінної
// оголошення функції
int main() {
int a=5,b=7,c=5; /* оголошення локальних
змінних */
setlocale (LC_CTYPE,"ua"); /*підключення
підтримки кирилиці української мови*/
y=((a+4*b-(pow(c,2)))/(2*a*b*c));
printf("a\t b\t c\t y\t \n");
printf("%d\t%d\t%d\t%f \n",a,b,c,y );
printf(" Відповідь %f\t", y);
return 0;}