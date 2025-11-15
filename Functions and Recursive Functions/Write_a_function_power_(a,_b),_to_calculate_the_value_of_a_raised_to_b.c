#include<stdio.h>
#include<math.h>
void power();

int main(){
    
    power();

    return 0;
}

void power(){
    double a,b,c;
        printf("Enter Base:\n");
        scanf("%lf",&a);
        printf("Enter Power :\n");
        scanf("%lf",&b);
     c=pow(a,b);
       printf("%.2lf raised to %.2lf is %.2lf.\n",a,b,c);
}