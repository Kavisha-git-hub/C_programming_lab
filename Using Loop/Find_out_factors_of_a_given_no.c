#include<stdio.h>
int main(){
    int num, factor;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("The factors of %d are:\n",num);
    for(factor=1;factor<=num;factor++){
        if (num % factor == 0){
            printf("%d\n",factor);
        }
    }
    return 0;

}