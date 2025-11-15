#include<stdio.h>
int main(){
    int i , num, sum=0;

     printf("Enter a number: ");
     scanf("%d", &i);
     
        while (i>0)
        {
            num = i % 10;
            sum += num;
            i /= 10;
        }
    printf("The summation of digits = %d\n",sum);    
 return 0;
  
}