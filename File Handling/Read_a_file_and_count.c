#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int inWord = 0;

    printf("Enter filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
            inWord = 0;
        } else if (ch == ' ' || ch == '\t') {
            spaces++;
            inWord = 0;
        } else {
            
            if (!inWord) {
                words++;
                inWord = 1;
            }
        }
    }

    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(file);

    printf("\n--- File Statistics ---\n");
    printf("Filename: %s\n", filename);
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
    printf("Spaces: %d\n", spaces);

    return 0;
}