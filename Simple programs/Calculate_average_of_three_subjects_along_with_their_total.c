#include<stdio.h>
int main() {
    float phy, chem, math, total, average;

        printf("Enter marks of Physics out of 100: ");
        scanf("%f", &phy);

        printf("Enter marks of Chemistry out of 100: ");
        scanf("%f", &chem);

        printf("Enter marks of Maths out of 100: ");
        scanf("%f", &math);

        total = phy + chem + math;
        average = total / 3;

        printf("Total marks: %.2f out of 300\n", total);
        printf("Average marks: %.2f out of 100\n", average);

    return 0;
}