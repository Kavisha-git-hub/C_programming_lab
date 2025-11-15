#include<stdio.h>
int main() {
    int i, n;

    printf("How many times do you want to write your name?\n ");
    scanf("%d", &n);

    for( i = 1; i <= n; i++) {
      printf("KV\n"); 
    }

    return 0;
}