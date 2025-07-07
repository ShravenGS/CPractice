#include<stdio.h>
int main(){
    int a[100],b[100],count,i,j,n;
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
    printf("The odd numbers in reverse are\n");
    for(i=n-1;i>=0;i--){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
    }
}
