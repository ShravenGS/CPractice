#include<stdio.h>
int main(){
    int rows=5,i,space,j,num;
    for(i=0;i<rows;i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("* ");
        }
         printf("\n");
    }

    for(i=rows-1;i>=0;i--){
            printf(" ");
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
         printf("\n");
    }
}
