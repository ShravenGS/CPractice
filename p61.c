#include<stdio.h>
int main(){
    int a[100],i,j,temp,n;
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
   for(i=0;i<n-1;i++){
       for(j=0;j<n-i-1;j++){
           if(a[j]>a[j+1]){
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
           }
       }
   }
   printf("The sorted elements are-->\n");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
