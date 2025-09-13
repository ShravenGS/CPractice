#include<stdio.h>
void reversearray(int arr[],int start,int end){
    int temp;
    if(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        reversearray(arr,start+1,end-1);
    }
}
int main(){
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    reversearray(a,0,n-1);
    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
