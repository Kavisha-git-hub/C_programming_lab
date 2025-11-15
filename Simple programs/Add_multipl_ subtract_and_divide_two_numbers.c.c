#include<stdio.h>
int main() {
    int num1, num2,sum, difference, product, quotient;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

   
    printf("%d + %d = %d\n", num1, num2, sum);
                        
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
                    
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %d / %d = %d\n", num1, num2, quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

 return 0;
}