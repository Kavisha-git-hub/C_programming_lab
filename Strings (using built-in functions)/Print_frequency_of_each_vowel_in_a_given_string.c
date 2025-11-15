#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int a=0, e=0, i_v=0, o=0, u=0;

    printf("Enter a string: ");
    gets(str);

    for(int j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]);
        if(ch == 'a') a++;
        else if(ch == 'e') e++;
        else if(ch == 'i') i_v++;
        else if(ch == 'o') o++;
        else if(ch == 'u') u++;
    }

    printf("Vowel frequencies:\n");
    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", a, e, i_v, o, u);
    return 0;
}
