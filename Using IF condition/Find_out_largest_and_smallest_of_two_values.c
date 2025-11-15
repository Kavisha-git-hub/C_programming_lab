#include<stdio.h>
int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Largest value= %d\n", num1);
        printf("Smallest value= %d\n", num2);
    } else if (num2 > num1) {
        printf("Largest value= %d\n", num2);
        printf("Smallest value= %d\n", num1);
    } else {
        printf("Both values are equal: %d\n", num1);
    }

    return 0;
}