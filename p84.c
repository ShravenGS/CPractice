#include<stdio.h>
int main(){
        int x=10;
        char*p=NULL;
        void *v;
        v=&x;
        printf("%d",*(int*)v);
        printf("%p",p);
}
