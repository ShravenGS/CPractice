#include<stdio.h>
int main(){
    int a[5][5],b[5][5],d[5][5],i,j,k,n,r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    printf("Enter the 1st matrix elements\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Original Matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Transpose of a matrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
         d[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
         printf("%d ",d[i][j]);
    }
    printf("\n");
    } 
}
