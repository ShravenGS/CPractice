#include<stdio.h>
int main(){
    int a[100],i,max,n;
    printf("Enter the number of elements used");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\nMaximum element will be %d",max);
}
