#include<stdio.h>
int main(){
    int amount,count=0 ,i,notes[]={500,200,100,50,20,10,5,2,1};
    printf("Enter amount\n");
    scanf("%d",&amount);
        for(i=0;i<9;i++){
          if (amount>=notes[i])
               {
                 count=amount/notes[i];
                 printf("%d note(s) of %d\n", count, notes[i]);
                 amount %= notes[i];
                }
        }

    return 0;
}