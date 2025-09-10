#include<stdio.h>
int main(){
    int n,i,j,k,num,isPrime;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        num=arr[i];
        isPrime=1;
        if(num<1){
            isPrime=0;
        }
        else{
            for(j=2;j<=num/2;j++){
                if(num%j==0){
                    isPrime=0;
                    break;
                }
            }
        }
        if(isPrime){
            for(k=i;k<n-1;k++){
                arr[k]=arr[k+1];
            }
            n--;
            i--;
        }
    }
    printf("Array after removing primes:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
