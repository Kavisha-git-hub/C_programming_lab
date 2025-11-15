#include <stdio.h>

int main() {
    int i, num, isPrime;
    printf("Enter a number:\n");
    scanf("%d", &num); 
        if (num== 1) {
            printf("%d is neither prime nor composite\n",num);
        }
        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }else{isPrime=1;}
        }

        if (isPrime==1){
            printf("%d is a prime number.\n", num);}
        else if(isPrime==0){
            printf("%d is not a prime number.\n", num);}

    return 0;
}