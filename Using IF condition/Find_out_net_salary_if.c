#include<stdio.h>
int main() {
    int G , N, A , D; // G = Gross Salary, N = Net Salary, A = Allowance, D = Deduction

    printf("Enter Gross Salary: ");
    scanf("%d", &G);

    if (G>10000) {
        A = G*0.10; 
        D = G*0.03;
    } else if (G>=5000 && G<=10000) {
        A = G*0.07; 
        D = G*0.02;
    }else{ printf("Not applicable for Gross Salary less than 5000\n");
        A = 0;
        D = 0;  
    }
    
    N = G + A - D;

 printf("Net Salary = %d\n", N);

    return 0;
}