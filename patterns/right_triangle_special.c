#include<stdio.h>
int main(){
    int rows=5,i,j,num;
    for(i=1;i<=rows;i++){
        num=i;
        for(j=1;j<=i;j++){
                printf("%d ",num);
                num+=(rows-j);
        }
        printf("\n");
    }
    return 0;
}
