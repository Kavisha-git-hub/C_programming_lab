#include<stdio.h>
int main() {
   int a, b, x;
    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    
    x = a;
    a = b;

    b = x;

    printf("After swapping, first value: %d\n", a);
    printf("After swapping, second value: %d\n", b);

    return 0;

}