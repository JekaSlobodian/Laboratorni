#include <stdio.h>//підключення бібліотек
#include<locale.h>
#include<math.h>
int x ;
int main() {
int z,y;
setlocale (LC_CTYPE,"ua"); /*підключення
підтримки кирилиці української мови*/
printf("\n введіть перше число z="); /*
виведення даних*/
scanf("%d",&z);/*введення даних*/
printf("\n введіть друге число  y=");
scanf("%d",&y);
if(y==5) {x=((sqrt(3*y))-(pow(z,2)));
  printf("\n якщо у=5 тоді  x= %d \t" , x );}
else if (y==10) {x=(pow(y,3)+z);
  printf("\n якщо у=10 тоді  x=  %d \t" , x );}
else if (y>10) {x=y*pow(z,2)-(2*y*z)+z;
  printf("\n  якщо у>10 тоді  x=  %d \t" , x );}
else printf("\n y  вказаний не вірно");

      
  
}