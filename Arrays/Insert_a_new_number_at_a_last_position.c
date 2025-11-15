#include <stdio.h>
int main() {
    int a[10], i, n;
    printf("Enter 9 values:\n");
    for (i = 0; i < 9; i++) scanf("%d", &a[i]);

    printf("Enter value to insert at last: ");
    scanf("%d", &n);
    a[9] = n;

    for (i = 0; i < 10; i++) printf("%d ", a[i]);
    return 0;
}
