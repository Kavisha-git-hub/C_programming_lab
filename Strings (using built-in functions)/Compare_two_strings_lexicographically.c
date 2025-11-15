#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    int res = strcmp(s1, s2);
    if(res == 0)
        printf("Strings are SAME\n");
    else if(res > 0)
        printf("%s is GREATER\n", s1);
    else
        printf("%s is GREATER\n", s2);
    return 0;
}
