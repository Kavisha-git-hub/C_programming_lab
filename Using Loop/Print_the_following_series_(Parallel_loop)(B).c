  #include<stdio.h>
   int main(){
    int i,j,count;
    
        for ( i = 1, j=5; i <= 3, j>=3; i++,j--)
        {
            for (count = 1;  count<=2; count++)
            {
                printf("%d %d\n",i, j);
            }
            
        }
       
    return 0;
}
          