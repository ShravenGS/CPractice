#include<stdio.h>
int main(){
   int x=10,y=20,z=30,i;
   int *a[3]={&x,&y,&z};
   for(i=0;i<3;i++){
       printf("%d ",*a[i]);
   }
}
    
