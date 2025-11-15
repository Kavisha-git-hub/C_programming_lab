#include<stdio.h>
int main(){
    char gender;
    int boys=0, girls=0;
        for(int i=1; i<=50; i++){
            printf("Enter gender of student %d (M/F): ", i);
            scanf(" %c", &gender);     
            if(gender == 'M' || gender == 'm'){ 
                boys++;
            } else if(gender == 'F' || gender == 'f'){  
                girls++;
            }else{
                printf("Invalid input. Please enter M or F.\n");
                i--; 
            }
        }
    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);
    return 0;
}