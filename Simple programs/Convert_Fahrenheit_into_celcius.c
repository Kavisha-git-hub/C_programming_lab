#include<stdio.h>
int main() {
    float C, F;

    printf("Enter temperature in F: ");
    scanf("%f", &F);

   C = (F - 32) * 5 / 9;

    printf("%.2f F = %.2f C\n", F,C);

    return 0;
}