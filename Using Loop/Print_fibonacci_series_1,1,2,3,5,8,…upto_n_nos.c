#include<stdio.h>
int main(){
 int i,j=1,n;
 printf("How many numbers of the Fibbonaci series do you want to print?\n");
 scanf("%d",&n);
 printf("1\n");
    for(i=0;i<=n-2;i++){
        j=j+i;
    printf("%d\n",j);
    }
return 0;
}