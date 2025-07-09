/*#include<stdio.h>
int main(){
   int x=10,y=20,z=30,i;
   int *a[3]={&x,&y,&z};
   for(i=0;i<3;i++){
       printf("%d ",*a[i]);
   }
}
*/
#include<stdio.h>
int main(){
    int i;
   int a[]={10,20,30,40,50};
   int *p[3]={a,a+4,a+3};
   for(i=0;i<3;i++){
       printf("%d ",*p[i]);
   }
}
    

