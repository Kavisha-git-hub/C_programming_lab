#include<stdio.h>
int main(){
    int a[5],i;

        for ( i = 0; i < 5; i++)
        {
            printf("Enter a value:\n");
            scanf("%d",&a[i]);
        }
        printf("You Entered:\n");
        for ( i = 0; i <5; i++)
        {
            printf("%d\n",a[i]);
        }
    
    return 0;
}