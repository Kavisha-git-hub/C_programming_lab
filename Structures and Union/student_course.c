#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    char courseName[50];
    char majorSubject[50];
    char minorSubject[50];
};


void printAllNames(struct Student students[], int count) {
    printf("\n--- Names of All Students ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, students[i].name);
    }
}


void printStudentByRoll(struct Student students[], int count, int rollNumber) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("\n--- Student Data ---\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Course: %s\n", students[i].courseName);
            printf("Major Subject: %s\n", students[i].majorSubject);
            printf("Minor Subject: %s\n", students[i].minorSubject);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with roll number %d not found.\n", rollNumber);
    }
}

int main() {
    struct Student students[10] = {
        {1, "Alice", "B.Tech CSE", "Data Structures", "Web Development"},
        {2, "Bob", "B.Tech CSE", "Algorithms", "Database"},
        {3, "Charlie", "B.Tech ECE", "Signals", "Communications"},
        {4, "Diana", "B.Tech ME", "Thermodynamics", "Mechanics"},
        {5, "Eve", "B.Tech CSE", "OS", "Networks"},
        {6, "Frank", "B.Tech IT", "Java", "Python"},
        {7, "Grace", "B.Tech ECE", "Digital Logic", "Microprocessors"},
        {8, "Henry", "B.Tech ME", "CAD", "Manufacturing"},
        {9, "Ivy", "B.Tech CSE", "AI", "Machine Learning"},
        {10, "Jack", "B.Tech IT", "Web Dev", "Mobile Apps"}
    };

    int choice, rollNumber;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Print names of all students\n");
        printf("2. Print data of a student by roll number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printAllNames(students, 10);
        } else if (choice == 2) {
            printf("Enter roll number: ");
            scanf("%d", &rollNumber);
            printStudentByRoll(students, 10, rollNumber);
        } else if (choice == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}