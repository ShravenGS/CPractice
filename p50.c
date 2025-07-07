#include<stdio.h>
int main(){
    int a[100],i,n,max;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements are-->\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    max=a[0];
    for(i=0;i<n;i++){
        if(max>a[i]){
            max=a[i];
        }
    }
    printf("The max element is:%d",max);
    
}
