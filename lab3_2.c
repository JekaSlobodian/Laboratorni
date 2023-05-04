#include <stdio.h>
#include <math.h>
int main () {
    float x1, y1, x2, y2, x3, y3;
    float distB, distC, distA;
    // (distance) відстань від Б до А та С до А
    printf("ввест координати точки  A (x1, y1): \n");
    scanf("%f %f", &x1, &y1);

    printf("введіть кооординати точки  B (x2 , y2): \n");
    scanf("%f %f", &x2 , &y2);

    printf("Eвведіть кооординати точки C (x3, y3): \n ");
    scanf("%f %f", &x3, &y3);
  distA= x1, y1,
    distB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    distC = sqrt(pow(x3 - x1, 2) + pow (y3 - y1, 2));
    if ( distB < distC) {
        printf("точка B (%.2f, %.2f) розміщена ближче до точки A.\n" , x2 , y2);
        printf("дистанція від B до A: %.2f\n", distB);
    } 
      if (distB == distC==distA) {
        printf("всі точки в одному місці");
          
      }
    else {
        printf("Точка C (%.2f, %.2f) розміщена ближче до точки A.\n", x3,y3);
        printf("дистанція від C до A: %.2f\n", distC);
        return 0;
    }
}
