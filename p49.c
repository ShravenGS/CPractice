#include<stdio.h>
int main(){
    int a[100],i;
    printf("Enter the elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are\n");
     for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
