#include<stdio.h>
int main() {
    int num1, num2, num3, largest, smallest;

        printf("Enter three integers: ");
        scanf("%d %d %d", &num1, &num2, &num3);

            // Largest number
            if (num1 >= num2 && num1 >= num3) {
                largest = num1;
            } else if (num2 >= num1 && num2 >= num3) {
                largest = num2;
            } else {
                largest = num3;
            }   

            // Smallest number
            if (num1 <= num2 && num1 <= num3) {        
                smallest = num1;
            } else if (num2 <= num1 && num2 <= num3) {        
                smallest = num2;
            } else {
                smallest = num3;
            }                       

        printf("Largest number: %d\n", largest);
        printf("Smallest number: %d\n", smallest);

    return 0;
}