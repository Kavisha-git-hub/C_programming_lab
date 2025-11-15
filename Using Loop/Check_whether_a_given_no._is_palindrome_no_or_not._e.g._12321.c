#include<stdio.h>
int main (){
    int num, temp, rem, rev=0;
        printf("Enter a number\n");
        scanf("%d",&num);
    temp=num;
        while (num!=0){
            rem= num%10;
            rev = rev*10 + rem;
            num /= 10;
        }
    
        if (rev == temp){
            printf("%d is a Palindrome\n",temp);
        }else{
            printf("%d is not a Palindrome\n",temp);
        }
        
    return 0;
}