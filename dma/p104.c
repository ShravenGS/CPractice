#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c,**a,i,j;
    printf("Enter number of rows and columns");
    scanf("%d %d",&r,&c);
    a=(int **)malloc(r*sizeof(int *));
    //a=(int **)calloc(n,sizeof(int*));
    for(i=0;i<r;i++){
        a[i]=(int *)malloc(c*sizeof(int));
        //a[i]=(int *)calloc(n,sizeof(int));
    }
    if(a==NULL){
        printf("Memeory allocation failed");
        return 1;
    }
    printf("Enter the elements");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        printf("%d",a[i][j]);
    }
    for(i=0;i<r;i++){
        free(a[i]);
    }
    free(a);
    return 0;
}
