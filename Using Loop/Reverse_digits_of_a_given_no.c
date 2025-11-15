#include <stdio.h>

int main() {
    int i, x, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &i);

    while (i != 0) {
        x = i % 10;
        rev = rev * 10 + x;
        i /= 10;
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}
