#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    int rollNo;
    char name[50];
    char choice;

    printf("Enter filename to write records (without extension): ");
    scanf("%s", filename);
    strcat(filename, ".csv");  
   
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }
    
    fprintf(file, "Roll No,Name\n");

    printf("\n--- Enter Student Records ---\n");
    while (1) {
        printf("Enter Roll No: ");
        scanf("%d", &rollNo);
        
        printf("Enter Name: ");
        scanf("%s", name);
        
        fprintf(file, "%d,%s\n", rollNo, name);
        printf("Record added successfully.\n");

        printf("Do you want to add more records? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    fclose(file);

    printf("\nRecords saved to '%s' successfully.\n", filename);
    printf("You can open this file directly in MS-Excel.\n");

    return 0;
}