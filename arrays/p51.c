#include<stdio.h>
int main(){
    int a[100],i,n,sum=0;
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
        sum+=a[i];
    }
    printf("The sum of given elements are:%d",sum);
    
}
