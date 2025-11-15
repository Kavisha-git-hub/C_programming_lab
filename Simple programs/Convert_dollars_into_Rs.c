#include<stdio.h>
int main() {
    int dollars, rs ;

    printf("Enter the amount in dollars: ");
    scanf("%d", &dollars);

    rs = dollars * 48; 
    
    printf("%d dollars is equal to %d Rs \n", dollars, rs);

    return 0;
}