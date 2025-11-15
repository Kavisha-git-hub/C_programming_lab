#include <stdio.h>
int main() {
    int i, n, sum ;
    sum = 0;
    printf("How many odd numbers do you want to add?\n ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
       sum = sum + (2*i - 1);
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}        