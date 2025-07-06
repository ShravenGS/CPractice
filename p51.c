#include<stdio.h>
int main(){
    int a[100],i,max1,max2,n;
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
    if(a[0]>a[1]){
        max1=a[0];
        max2=a[1];
    }
    else{
        max1=a[1];
        max2=a[0];
    }
    for(i=2;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if (a[i]>max2 && a[i]!=max1){
            max2=a[i];
        }
    }
    if(max1==max2){
        printf("\nAll elements ar equal");
    }
    else{
        printf("\n1st maximum:%d and 2nd maximum:%d",max1,max2);
    }
}
