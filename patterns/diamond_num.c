#include<stdio.h>
int main(){
    int rows=5,i,j,k;
    for(i=0;i<rows;i++){
        for(j=0;j<2*(rows-i)-1;j++){
            printf(" ");
        }
        for(k=1;k<=2*i+1;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    
    for(i=rows-2;i>=0;i--){
        for(j=0;j<2*(rows-i)-1;j++){
            printf(" ");
        }
        for(k=1;k<=2*i+1;k++){
             printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
