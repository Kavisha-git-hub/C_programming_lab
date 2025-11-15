#include <stdio.h>
int main() {
    int a[10], b[10], i, n, dir;
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) scanf("%d", &a[i]);

    printf("Enter shift (positions): ");
    scanf("%d", &n);
    printf("Direction (1=Right, 2=Left): ");
    scanf("%d", &dir);

    for (i = 0; i < 10; i++) b[i] = 0;

    if (dir == 1)
        for (i = 0; i < 10; i++)
            if (i + n < 10) b[i + n] = a[i];

    else
        for (i = 0; i < 10; i++)
            if (i - n >= 0) b[i - n] = a[i];

    printf("Shifted array:\n");
    for (i = 0; i < 10; i++) printf("%d ", b[i]);
    return 0;
}
