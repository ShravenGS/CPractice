#include<stdio.h>
int main(){
    int num,i,j;
    printf("Enter the number\n");
    scanf("%d",&num);
    char *p=(char *)&num;
    p=p+3;
    for(i=0;i<4;i++){
        for(j=7;j>=0;j--){
            printf("%d",*p>>j&1);
        }
        printf(" ");
        --p;
    }
}
