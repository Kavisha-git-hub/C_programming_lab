#include<stdio.h>
int main() {
    int n, sum = 0;

   for (int n = 1; n<=100; n++) {
    if(n%13==0) {
        sum=sum+n;}
    }
    printf("Sum of all numbers divisible by 13 from 1 to 100 = %d\n", sum);

    return 0;
}
   
