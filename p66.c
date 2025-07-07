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
    printf("Enter the 2nd matrix elements\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("Multiplication of both matrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[i][j]=0;
            for(k=0;k<c;k++){
                d[i][j]+=a[i][k]*b[k][j];
        }
         printf("%d ",d[i][j]);;
    }
    printf("\n");
    } 
}
