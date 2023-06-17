#include <stdio.h>
int main() {
    const int hard_disk = 7;
    int cost[7];
    int memory[7];
    int threshold;
    printf("Введіть інформаію до кожного диску:\n  ");
    for(int i = 0; i < hard_disk; i++) {
        printf("диск %d:\n", i + 1);
        printf("обсяг памяті (в гігабайтах): ");
        scanf("%d" , &memory[i]);
        printf("ціна(в грн ): ");
        scanf("%d" , &cost[i]);
    }
    printf("Введіть поріг вартості (в грн): ");
    scanf("%d" , &threshold);
      for (int i = 0; i < hard_disk; i++) {
        if (cost[i] > threshold) {
            printf("%d гігабайти \n", memory[i]);
        }
     }
    return 0;
}