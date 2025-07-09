#include<stdio.h>
int main(){
    int x=10;
    char*cp=(char*)&x;
    char**cpp=&cp;
    printf("%d %d %d",x,*cp,**cpp);
}
