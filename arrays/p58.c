#include<stdio.h>
int main(){
    int a[100],b[100],largest,sec_largest,count,i,j,n;
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
       if(n<2){
           printf("Enter atlesat 2 elements");
       }
   }
       if (a[0]>a[1]){
           largest=a[0];
           sec_largest=a[1];
       }
       else if(a[1]>a[0]){
            largest=a[1];
            sec_largest=a[0];
       }
       for(i=0;i<n;i++){
           if(a[i]>largest){
               sec_largest=largest;
               largest=a[i];
           }
           else if(a[i]>sec_largest&&a[i]!=largest){
               sec_largest=a[i];
           }
        }
        printf("\nLargest element:%d",largest);
        printf("\nSecond largest element:%d",sec_largest);
}
