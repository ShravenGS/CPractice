#include<stdio.h>
int main(){
    int a[100],i,key,count=0,n;
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
    printf("Enter the key");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    printf("The count is:%d",count);
}
