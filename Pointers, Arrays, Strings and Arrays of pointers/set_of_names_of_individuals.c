#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *token;
    char last[50];

    printf("Enter full name: ");
    gets(name);

    token = strtok(name, " ");
    strcpy(last, token); // first word stored temporarily

    int word = 0;
    while(token != NULL) {
        word++;
        strcpy(last, token);
        token = strtok(NULL, " ");
    }

    token = strtok(name, " ");
    while(token != NULL) {
        if(strcmp(token, last) == 0)
            break;
        printf("%c.", token[0]);
        token = strtok(NULL, " ");
    }

    printf(" %s", last);
    return 0;
}
