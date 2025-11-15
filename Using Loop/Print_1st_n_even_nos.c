#include <stdio.h>
int main() {
    int even, n;
    printf("How many even numbers do you want to write ?\n");
    scanf("%d", &n);
    for (even = 0; even < 2 * n; even = even + 2) {
        printf("%d\n", even);
    }
    return 0;
}