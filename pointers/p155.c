#include<stdio.h>
int main(){
    int i,j;
    float num;
    printf("Enter the number\n");
    scanf("%d",&num);
    short int *p=(short int *)&num;
    p=p+4;
    for(i=0;i<2;i++){
        for(j=15;j>=0;j--){
            printf("%d",*p>>j&1);
        }
        printf(" ");
        --p;
    }
}
