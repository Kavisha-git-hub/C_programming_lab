#include<stdio.h>

void add(int num1, int num2);
void subtract(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);

int main(){
    int num1, num2, choice;
                printf("Enter first number\n");
                scanf("%d",&num1);
                printf("Enter Second number\n");
                scanf("%d",&num2);
          printf("===== SIMPLE CALCULATOR =====\n");
          printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
          printf("Enter your choice (1-4): ");
          scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    add(num1, num2);
                    break;
                case 2:
                subtract(num1, num2);
                break;
                case 3:
                multiply(num1, num2);
                break;
                case 4:
                divide(num1, num2);
                break;
                
                default:
                printf("Enter valid choice\n");
                 break;
            }
            
    
    return 0;
}
void add(int num1, int num2){
    int sum;
    sum = num1 + num2;

    printf("Sum of %d and %d = %d\n", num1, num2, sum);
}

    
void subtract(int num1 , int num2){
    int difference;
     
    difference=num1-num2;

    printf("Difference between %d and %d = %d\n",num1,num2,difference);
}

void multiply(int num1, int num2){
    int product;
     
    product=num1*num2;

    printf("Product of %d and %d = %d\n",num1,num2,product);
}
  
void divide(int num1, int num2){
    int quotient;
     
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }

    quotient = num1 / num2;

    printf("Quotient of %d and %d = %d\n", num1, num2, quotient);
}
  
