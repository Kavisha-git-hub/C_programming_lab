#include<stdio.h>
int main(){
    int i , factor ,num ,sum=0;
        printf("Enter a number:\n");
        scanf ("%d",&num);
    
            for(i=1;i<=num/2;i++)
            {
            if (num%i==0)
            {
                factor =i;
                sum = sum + factor;
            }
            
            }
        if (sum == num){
            printf("%d is a Perfect Number.\n",num);
        }else{
            printf("%d is not a Perfect Number.\n",num);
        }
 return 0;
}