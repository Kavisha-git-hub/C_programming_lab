#include<stdio.h>
void isLeapYear();

int main(){

    isLeapYear();

   return 0;
}

void isLeapYear(){
  int isLeap=0, year;
   printf("Enter Year (YYYY):\n");
   scanf("%d",&year);
        if (year%4==0)
        {
            isLeap=1;
            printf("%d is a Leap Year.\n",year);

        }else{

            printf("%d is not a Leap Year.\n",year);

        }
    }