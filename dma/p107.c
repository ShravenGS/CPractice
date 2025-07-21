#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,w,**a,**b,**c,i,j,trace=0;
    printf("Enter number of rows and columns");
    scanf("%d %d",&r,&w);
    a=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++){
        a[i]=(int *)malloc(w*sizeof(int));
    }
    
     if(a==NULL){
        printf("Memeory allocation failed");
        return 1;
    }
   
    printf("Enter the elements for 1st array");
    for(i=0;i<r;i++){
        for(j=0;j<w;j++)
        scanf("%d",&a[i][j]);
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<w;j++)
        printf("%d ",a[i][j]);
    }
    printf("\n");
    
    for(i=0;i<r||i<w;i++){
            trace+=a[i][i];
        }
    printf("%d",trace);
    for(i=0;i<r;i++){
        free(a[i]);
    }
    free(a);
}
