#include<stdio.h>
int main() {
    int A, P, side;

    printf("Enter the length of a side of the square: ");
    scanf("%d", &side); 

    A = side * side;
    P = 4 * side;   

    printf("Area of the square = %d sq units\n", A);
    printf("Perimeter of the square = %d units\n", P);    

    return 0;
}