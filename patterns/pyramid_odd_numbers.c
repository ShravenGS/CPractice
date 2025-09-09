#include<stdio.h>
int main(){
    int rows=5,i,space,j,num;
    for(i=1;i<=rows;i++){
        for(space=1;space<=rows-i;space++){
            printf("  ");
        }
        num=1;
        for(j=1;j<=(2*i-1);j++){
            printf("%d ",(num*2-1));
            num++;
        }
         printf("\n");
    }
   
}
