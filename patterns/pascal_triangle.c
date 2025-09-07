#include<stdio.h>
int main(){
    int rows=5,i,j,num;
    for(i=0;i<=rows;i++){
        num=1;
        for(j=0;j<=rows-i;j++){
                printf(" ");
        }
        
        for(j=0;j<=i;j++){
            printf(" %d ",num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
