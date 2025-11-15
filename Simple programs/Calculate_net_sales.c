#include<stdio.h>
int main() {
    float N,G,D;// N= Net Sales, G= Gross Sales, D= Discount

        printf("Enter Gross Sales: ");
        scanf("%f", &G);

        D = 0.10 * G;

        N = G - D;

        printf("Net Sales = %.2f\n", N);

    return 0;
}