#include<stdio.h>
void swapTwoIntegers();

int main(){
    swapTwoIntegers();
    return 0;
}

void swapTwoIntegers(){
    int a,b,temp;
        printf("Enter First Number:\n");
        scanf("%d",&a);
        printf("Enter Second Number:\n");
        scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
        printf("First Number = %d\n",a);
        printf("Second Number = %d\n",b);
}