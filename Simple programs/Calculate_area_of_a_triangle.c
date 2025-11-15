#include<stdio.h>
int main() {
    float B, H, A;

    printf("Enter the base of the triangle: ");
    scanf("%f", &B);

    printf("Enter the height of the triangle: ");
    scanf("%f", &H);

    A = 0.5 * B * H;

    printf("Area of the triangle = %.2f sq units\n", A);    

    return 0;
}