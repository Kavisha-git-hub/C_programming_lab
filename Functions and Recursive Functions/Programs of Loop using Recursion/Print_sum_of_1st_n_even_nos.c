#include <stdio.h>
void sum_of_first_n_even_numbers(int even, int n, int sum);

int main() {
    int even, n;
    sum_of_first_n_even_numbers(int even, int n, int sum);
    return 0;
}

void sum_of_first_n_even_numbers(int even, int n, int sum){
    printf("How many even numbers do you want to add ?\n");
        scanf("%d", &n);
    
            for (even = 0; even < 2 * n; even = even + 2) {
                sum =sum + even ;
            }
        printf("Sum of first %d even numbers = %d\n", n, sum);
}