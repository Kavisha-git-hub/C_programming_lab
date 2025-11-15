#include<stdio.h>
int main() {
    int x,n;
    printf("How many natural numbers do you want to print? ");
    scanf("%d", &n);

    for(x=1; x<=n; x++) {
        printf("%d\n", x);  
    }

return 0;
}