#include<stdio.h>
int main() {
    float G, A, D, N;// G= Gross Salary, A= Allowance, D= Deduction, N= Net Salary

    printf("Enter Gross Salary: ");
    scanf("%f", &G);

    A = 0.10 * G; 
    D = 0.05 * G; 
   
    N = G + A - D;

    printf("Net Salary = %.2f\n", N);
 
    return 0;
}