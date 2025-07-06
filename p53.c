#include<stdio.h>
int main(){
    int a[100],i,n,pal=1;
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
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            pal=0;
            break;
        }
    }
    if(pal){
        printf("\nPalindrome");
    }
    else{
        printf("\nNot a palindrome");
    }
}
