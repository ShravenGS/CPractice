#include<stdio.h>
int main(){
    int a[5][5],b[5][5],i,j,k,n,r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    printf("Enter the elements\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("The elements are-->\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }
}
