#include <stdio.h>
int main() {
    int a[10], i, pos;
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {scanf("%d", &a[i]);}

    printf("Enter position to delete (0-9): ");
    scanf("%d", &pos);

    for (i = pos; i < 9; i++) {a[i] = a[i+1];
    a[9] = 0;}

    for (i = 0; i < 10; i++) {printf("%d ", a[i]);}
    return 0;
}