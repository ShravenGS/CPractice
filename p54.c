#include<stdio.h>
int main(){
    int a[100],i,n,pos,val;
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
    printf("Add the position");
    scanf("%d",&pos);
    printf("Enter the value");
    scanf("%d",&val);
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    for(i=n;i>pos;i++){
        a[i]=a[i-1];
    }
    a[pos]=val;
    n++;
    printf("Now the elements are\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
