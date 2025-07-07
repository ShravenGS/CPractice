#include<stdio.h>
int main(){
    int a[100],i,n,palindrome=1;
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
     for(i=0;i<n/2;i++){
         if(a[i]!=a[n-i-1]){
             palindrome=0;
             break;
         }
    }
    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
