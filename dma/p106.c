#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,w,**a,**b,**c,i,j,k;
    printf("Enter number of rows and columns");
    scanf("%d %d",&r,&w);
    a=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++){
        a[i]=(int *)malloc(w*sizeof(int));
    }
    b=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++){
        b[i]=(int *)malloc(w*sizeof(int));
    }
    c=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++){
        c[i]=(int *)malloc(w*sizeof(int));
    }
    if(a==NULL){
        printf("Memeory allocation failed");
        return 1;
    }
    if(b==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter the elements for 1st array");
    for(i=0;i<r;i++){
        for(j=0;j<w;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the elements for 2nd array");
    for(i=0;i<r;i++){
        for(j=0;j<w;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<w;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<w;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<w;j++){
            for(k=0;k<w;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
         printf("%d ",c[i][j]);
    }
     printf("\n");
}
    printf("\n");
    for(i=0;i<r;i++){
        free(a[i]);
    }
    free(a);
    for(i=0;i<r;i++){
        free(b[i]);
    }
    free(b);
    for(i=0;i<r;i++){
        free(c[i]);
    }
    free(c);
    return 0;
}
