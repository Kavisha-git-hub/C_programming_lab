#include<stdio.h>
int main (){
    int i;
    int sum=0;
    float mean;
   printf("Enter 10 values:\n");
    for(i=1;i<=10;i++){
         int value;
         printf("Value %d: ",i);
         scanf("%d",&value);
         sum=sum+value;
    }
    mean = sum / 10.0;
    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);
    return 0;
 
}
    