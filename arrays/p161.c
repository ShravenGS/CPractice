#include<stdio.h>
int main(){
    int i,arr[10],n,j,k;
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\n");
    printf("Removed duplicate elements....\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
