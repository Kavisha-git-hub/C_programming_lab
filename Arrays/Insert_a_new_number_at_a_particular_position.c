#include <stdio.h>
int main() {
    int a[10], n, pos, i;
    printf("Enter 9 values:\n");
    for (i = 0; i < 9; i++) {scanf("%d", &a[i]);}

    printf("Enter value and position (0-9): ");
    scanf("%d %d", &n, &pos);

    for (i = 9; i > pos; i--) {a[i] = a[i-1];
    a[pos] = n;}

    for (i = 0; i < 10; i++) {printf("%d ", a[i]);}
    
    return 0;
}
