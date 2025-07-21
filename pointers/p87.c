#include<stdio.h>
int main(){
    int x=25;
    int*p=&x;
    int**pt=&p;
    int***ptr=&pt;
    printf("%d %d %d %d",x,*p,**pt,***ptr);
}
    
