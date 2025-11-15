#include<stdio.h>
int main() {
    int G,N,D; // G = Gross Sales, N = Net Sales,  D = Discount

    printf("Enter Gross Sales: ");
    scanf("%d", &G);

            if (G>20000)
            {
            D = 0.15*G ;
            }else if (G>=10000 && G<=20000)
            {
            D = 0.10*G ;}
            else
            { D = 0.05*G;
            }   

      N = G - D;

     printf("Net Sales = %d\n", N);

    return 0;
    
}
   