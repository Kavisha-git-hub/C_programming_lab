#include <stdio.h>

int main() {
    char *books[3];
    char temp[50];
    int i;

    for(i=0;i<3;i++){
        printf("Enter book name %d: ", i+1);
        gets(temp);
        books[i] = strdup(temp);
    }

    printf("\nBook Names:\n");
    for(i=0;i<3;i++)
        printf("%s\n", books[i]);

    return 0;
}
