#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char line[500];
    int numLines;

    printf("Enter filename to write to: ");
    scanf("%s", filename);
    scanf("\n");  

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    printf("How many lines do you want to enter? ");
    scanf("%d", &numLines);
    scanf("\n"); 
    
    printf("Enter %d lines:\n", numLines);
    for (int i = 0; i < numLines; i++) {
        printf("Line %d: ", i + 1);
        fgets(line, sizeof(line), stdin);  
        fputs(line, file);                 
    }

    
    fclose(file);

    printf("\nData written to file '%s' successfully.\n", filename);

    return 0;
}