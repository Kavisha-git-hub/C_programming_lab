#include<stdio.h>
int main() {
    float gms, kg;
    
    printf("Enter weight in kg: ");
    scanf("%f", &kg);
   
    gms = kg * 1000.0;
    printf("%f kg is equal to %f gms\n", kg, gms);
    
    return 0;
}