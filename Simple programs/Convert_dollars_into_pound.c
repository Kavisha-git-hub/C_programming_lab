#include<stdio.h>
int main() {
    float dollars,pounds;
    
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollars);

    pounds= (48.0/70.0)*dollars; // 1 pound = 70 rs, 1 dollar = 48 rs
    printf("%f dollars = %f pounds\n",dollars,pounds);
    
 return 0;
}