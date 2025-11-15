#include <stdio.h>
int main() {
    int a[10], i;
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) scanf("%d", &a[i]);

    for (i = 0; i < 9; i++) a[i] = a[i+1];
    a[9] = 0;

    for (i = 0; i < 10; i++) printf("%d ", a[i]);
    return 0;
}
