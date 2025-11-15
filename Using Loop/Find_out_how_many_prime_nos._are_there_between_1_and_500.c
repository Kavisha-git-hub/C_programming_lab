#include<stdio.h>
int main(){
    int i, j, isPrime, count=0;

    for(i=2;i<=500;i++){

     isPrime=1;
      for(j=2;j*j<=i;j++){

        if (i%j==0)
        {
            isPrime=0;
            break;
        }
        
      }

      if (isPrime== 1)
      {
        count++;
      }
      
    }

    printf("There are %d Prime Numbers between 1 and 500.\n",count);

    return 0;
}