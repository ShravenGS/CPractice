#include<stdio.h>
int main(){
    int a[100],b[100],i,n;
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
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    printf("The copied elements are:");
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
