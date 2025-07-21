#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*a,i;
    printf("Enter number of elements");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    //a=(int *)calloc(n,sizeof(int));
    if(a==NULL){
        printf("Memeory allocation failed");
        return 1;
    }
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
