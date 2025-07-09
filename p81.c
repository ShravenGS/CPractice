/*#include<stdio.h>
int main(){
    int x=300;
    char*p;
    p=(char *)&x;
    ++p;
    *p = 2;
    printf("%d",x);
}
#include<stdio.h>
int main(){
    int x=10;
    short int*p;
    p=(short int *)&x;
    ++p;
    *p = 1;
    printf("%d",x);
}*/

#include<stdio.h>
int main(){
        int x=10;
        float*p;
        p=(float*)&x;
        ++p;
        *p=5.002;
        printf("%d",x);
}
