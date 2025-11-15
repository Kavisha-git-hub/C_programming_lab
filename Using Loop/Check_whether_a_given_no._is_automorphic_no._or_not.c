#include<stdio.h>
int main(){

    int i, num , x, square, isAuto=1;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    square = num*num;
    x = num;

      while(num>0){
         if (square%10 != num%10)
         {
            isAuto=0;
            break;
         }
         num/=10;
         square/=10;
       }
    if (isAuto==1){
      printf("%d is an Automorphic Number\n",x);
    }else{printf("%d is not an Automorphic number\n",x);}

 return 0;
}