#include<stdio.h>
int main() {
 float R , A ;
    printf("Enter the radius of the circle: ");
    scanf("%f", &R);
    A = 22.0/7.0 * R * R;
    printf("Area of the circle = %.2f sq units\n", A);
 return 0; 
} 