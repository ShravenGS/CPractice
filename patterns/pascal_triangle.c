#include<stdio.h>
int main(){
    int rows=5,i,space,j,num;
    for(i=0;i<rows;i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        num=1;
        for(j=0;j<=i;j++){
            printf("%d ",num);
            num=num*(i-j)/(j+1);
        }
         printf("\n");
    }
   
}
