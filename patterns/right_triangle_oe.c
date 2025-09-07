#include<stdio.h>
int main(){
    int rows=6,i,j;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            if(i%2==1){
                printf("%d ",2*j-1);
            }
            else{
                printf("%d ",2*j);
            }
        }
        printf("\n");
    }
    return 0;
}
