#include<stdio.h>
int main(){
    int odd, n;
      printf("How many odd numbers do you want to write ?\n");
     scanf ("%d",&n);
            for ( odd = 1; odd < 2*n; odd=odd+2)
            {
            printf("%d\n",odd);
            }
    return 0;
}