#include<stdio.h>
int main(){
    int i,j;
    double num;
    printf("Enter the number\n");
    scanf("%d",&num);
    char *p=(char *)&num;
    p=p+7;
    for(i=0;i<8;i++){
        for(j=15;j>=0;j--){
            printf("%d",*p>>j&1);
        }
        printf(" ");
        --p;
    }
}
