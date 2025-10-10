#include<stdio.h>
int main(){
    int a[100],i,pos,n,val;
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
   printf("Enter the position");
   scanf("%d",&pos);
   if(pos<1||pos>n+1){
       printf("Invalid");
       return 0;
   }
   for(i=pos;i<n-1;i++){
       a[i]=a[i+1];
   }
   n--;
    printf("\nNow the elements are-->\n");
   for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
