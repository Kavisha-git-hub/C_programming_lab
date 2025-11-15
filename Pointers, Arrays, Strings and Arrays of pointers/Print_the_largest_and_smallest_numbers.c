#include <stdio.h>

int main() {
    int m[3][3], i, j;
    int *p = &m[0][0];
    int large, small;

    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &m[i][j]);

    large = small = *p;

    for(i=0;i<9;i++, p++){
        if(*p > large) large = *p;
        if(*p < small) small = *p;
    }

    printf("Largest = %d\nSmallest = %d", large, small);
    return 0;
}
