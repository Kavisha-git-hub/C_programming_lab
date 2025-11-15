#include<stdio.h>
void factorial();

int main(){

    factorial();
    return 0;
}

void factorial(){
    int i, num,fact=1;
        printf("Enter a Number:\n");
        scanf("%d",&num);
            for ( i =  1; i <= num; i++)
            {
                fact *= i;
            }
        printf("%d! = %d\n",num,fact);
}