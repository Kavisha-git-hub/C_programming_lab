#include<stdio.h>
int main() {
    int I, P, R, N;

    printf("Enter Principal amount: "); 
    scanf("%d", &P);

    printf("Enter Rate of interest: ");     
    scanf("%d", &R);

    printf("Enter Number of years: "); 
    scanf("%d", &N);

    I = (P * R * N) / 100;

    printf("Simple Interest = %d\n", I);
 return 0;
}