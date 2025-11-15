#include<stdio.h>
int main(){
    int n,i,sum=0;
    float mean;
    printf("Enter the number of values you want to input: ");
    scanf("%d",&n);
    printf("Enter %d values:\n",n); 
    for(i=1;i<=n;i++){
        int value;
        printf("Value %d: ",i);
        scanf("%d",&value);
        sum=sum+value;
    }
    mean = sum / (float)n;
    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);  
    return 0;
}