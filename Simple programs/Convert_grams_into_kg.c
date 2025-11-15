#include<stdio.h>
int main() {
    float gms, kg;
    
    printf("Enter weight in gms: ");
    scanf("%f", &gms);
    
    kg = gms / 1000.0;
    
    printf("%f gms = %f kg\n", gms, kg);
    
    return 0;
}