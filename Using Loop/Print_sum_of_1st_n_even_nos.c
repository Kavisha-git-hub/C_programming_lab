#include <stdio.h>
int main() {
    int even, n;
    printf("How many even numbers do you want to add ?\n");
    scanf("%d", &n);
    int sum = 0;
    for (even = 0; even < 2 * n; even = even + 2) {
        sum =sum + even ;
    }
    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}