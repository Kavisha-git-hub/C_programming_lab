#include<stdio.h>
int main(){
    int num, temp, dig, cube, sum=0; 
    printf("Enter a number:\n");
    scanf("%d",&num);
    temp = num;
        while (num!=0){
        dig = num %10;
        cube = dig * dig *dig;
        num /= 10;
        sum = sum + cube; }

        if (temp==sum){
            printf("%d is an Armstrong Number\n", temp);
        }else{
            printf("%d is not an Armstrong Number\n",temp);
        }
 return 0;
}