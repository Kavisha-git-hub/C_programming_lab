#include<stdio.h>
int main() {
    int L,B, A, P;
        printf("Enter the length of the rectangle:");
        scanf("%d", &L);
        printf("Enter the breadth of the rectangle:");
        scanf("%d", &B);

        A = L * B;
        P = 2 * (L + B);

        printf("Area of the rectangle = %d sq units\n", A);
        printf("Perimeter of the rectangle = %d units\n", P);   

    return 0;
}