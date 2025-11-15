#include<stdio.h>
int main(){
    int i , num;
     printf("Enter a number: ");
     scanf("%d", &i);
      printf("Digits (separated):\n ");
        while (i>0)
        {
         num = i % 10;
            printf("%d\n",num);
            i /= 10;
        }
 return 0;
  
}