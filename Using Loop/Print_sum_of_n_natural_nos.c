#include<stdio.h>
int main() {
    int i, n, sum ;
    sum = 0;
    printf("How many natural numbers do you want to add? ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
       sum = sum + i;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}