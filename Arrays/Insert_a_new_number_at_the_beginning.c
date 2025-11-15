#include <stdio.h>
int main() {
    int a[10] = {0}, n, i;
    printf("Enter 9 values:\n");
    for (i = 1; i < 10; i++) {scanf("%d", &a[i]);}

    printf("Enter value to insert at beginning: ");
    scanf("%d", &n);
    a[0] = n;

    for (i = 0; i < 10; i++) {printf("%d ", a[i]);}
    return 0;
}
