#include<stdio.h>
int main(){
    int a[100],b[100],count,i,j,n;
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
    printf("The count of every element are:");
    printf("\n");
    for(i=0;i<n;i++){
        b[i]=0;
    }
    for(i=0;i<n;i++){
        if(b[i]==-1){//for avoiding repetation on counting
                continue;
        }
        count=1;
        for(j=i+1;j<n;j++){
             if(a[i]==a[j]){
                 count++;
                 b[j]=-1;
             }
        }
        b[i]=count;
    }
     for(i=0;i<n;i++){
        if(b[i]!=-1){
            printf("%d:%d\n",a[i],b[i]);
        }
    }
    for(i=0;i<n;i++){
    if(b[i]==1){
        printf("Non repeating elements are:%d",a[i]);
        }
    }
}
