#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strupr(str);
    printf("Uppercase = %s\n", str);
    return 0;
}
