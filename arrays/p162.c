#include <stdio.h>
int main() {
    int a[]={1,2,3,4,5};
    char b[]={'a','b'};
    int n1=5,n2=2;
    int i=0,j=0;
    
    while(i<n1&&j<n2){
        printf("%d %c ",a[i],b[j]);
        i++;
        j++;
    }
    
    while(i<n1){
        printf("%d ",a[i]);
        i++;
    }
    while(j<n2){
        printf("%c ",b[j]);
        j++;
    }
    return 0;
}
