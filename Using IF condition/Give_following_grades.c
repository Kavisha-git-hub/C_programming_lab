#include<stdio.h>
int main() {
    int phy, chem, math, total, avg;

        printf("Enter marks of Physics out of 100:\n");
        scanf("%d", &phy);  
        printf("Enter marks of Chemistry out of 100:\n ");
        scanf("%d", &chem);         
        printf("Enter marks of Mathematics out of 100:\n ");
        scanf("%d", &math);

    total = phy + chem + math;
    avg = total / 3;

    printf("Total Marks = %d\n", total);
    printf("Average Marks = %d\n", avg);

        if (avg>=70)
        {
            printf("Distinction\n");
        }else if(avg>=60 && avg<70)
        {
            printf("First Class\n");
        } else if(avg>=50 && avg>60){
            printf("Second Class\n");
        } else if(avg>=35 && avg<50){
            printf("Third Class\n");
        } else {
            printf("Fail\n");
        }
 return 0;
}   