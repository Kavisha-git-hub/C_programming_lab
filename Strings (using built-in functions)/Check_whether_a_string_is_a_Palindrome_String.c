#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(temp, str);
    strrev(temp);

    if(strcmp(str, temp) == 0)
        printf("Palindrome string.\n");
    else
        printf("Not a palindrome.\n");
    return 0;
}
