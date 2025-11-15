#include<stdio.h>
int main(){
    int a[10],i;
        for ( i = 0; i <10; i++)
        {
            printf("Enter a Value:\n");
            scanf("%d",&a[i]);
        }

     printf("4th value = %d\n7th value = %d\n9th value = %d\n", a[3], a[6], a[8]);

    return 0;
    
}