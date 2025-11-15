#include<stdio.h>
int main(){
    int i,dig=0;

    printf("Enter a number:\n");
    scanf("%d",&i);

        while(i!=0){
            i/=10;
            dig++;
        }

    printf("Total Digits = %d \n",dig);
return 0;
}