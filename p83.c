#include<stdio.h>
int main(){
        const int x =10;
        printf("%d\n",x);
        //x=20;Not possible
        //int*p=(int*)&x;//this is possible
        //*p=20;
        //printf("%d",*p);
        //const int *p=&x;
        //*p=20;//not possible
        //printf("%d\n",*p);
        int* const p=&x;
        *p=30;
        //p=&y ;not possible
        printf("%d\n",*p);
}
~    
