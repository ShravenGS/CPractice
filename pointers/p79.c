#include<stdio.h>
int main(){
    int x=10;
    int *p=&x;
    printf("Address of x:%p\n",&x);
    printf("Pointer of p holds:%p\n",p);
    printf("Value at p:%d\n",*p);
    return 0;
}

/* *p=x
    p=&x
 */
