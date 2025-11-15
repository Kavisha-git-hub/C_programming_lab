#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char line[500];

    // Get filename from user
    printf("Enter filename to read: ");
    scanf("%s", filename);

    // Open file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    // Read and display file content line by line
    printf("\n--- File Content ---\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // line already contains newline from fgets()
    }

    // Close file
    fclose(file);

    printf("\n--- End of File ---\n");

    return 0;
}