#include<stdio.h>
int main() {
    float bytes, KB, MB, GB;

    printf("Enter size in bytes: ");
    scanf("%f", &bytes);

    KB = bytes / 1024;
    MB = KB / 1024;   
    GB = MB / 1024;

    printf("Size in KB: %.2f KB\n", KB);
    printf("Size in MB: %.2f MB\n", MB);
    printf("Size in GB: %.2f GB\n", GB);

    return 0;
}