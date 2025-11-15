#include <stdio.h>
int main() {
    int a[10], i, val, found = 0;
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {scanf("%d", &a[i]);}

    printf("Enter value to search: ");
    scanf("%d", &val);

    for (i = 0; i < 10; i++){
        if (a[i] == val) {
            printf("%d found at position %d\n", val, i+1);
            found = 1;
            break;
        }
    }
    if (!found) {printf("Value not found\n");}
    return 0;
}

