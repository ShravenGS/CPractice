#include<stdio.h>
int main(){
   int x=10,y=20,z=30;
   int *a[3]={&x,&y,&z};
   printf("%p %p %p\n",&z,&y,&z);
   printf("%d %d %d\n",*a[0],*a[1],*a[2]);
   printf("%p %p %p\n",a[0],*a[1],*a[2]);
}
    
