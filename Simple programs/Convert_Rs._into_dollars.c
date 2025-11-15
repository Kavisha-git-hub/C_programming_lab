#include<stdio.h>
int main() {
    float Rs,dollars;


    printf("Enter the amount in Rs: ");
    scanf("%f", &Rs);

    dollars = Rs / 48;
    
    printf(" %f Rs = %f dollars\n", Rs, dollars);

    return 0;
}