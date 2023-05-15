#include <stdio.h>

int main() {
    int n;
    double x, sum = 0.0;

    printf("Введіть число  n: ");
    scanf("%d", &n);

    printf("Введіть число x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            sum += x * j;
        }
    }

    printf("Відповідь сума=: %.2lf", sum);
    return 0;
}
