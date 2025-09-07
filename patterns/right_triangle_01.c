#include<stdio.h>
int main(){
    int rows=6,i,j;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            if(j%2==1){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
