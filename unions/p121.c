#include <stdio.h>
union data{
    int i;
    float f;
    char c;
};
int main(){
    union data d;
    d.i=100;
    printf("%d\n",d.i);
    d.f=10.05;
    printf("%f\n",d.f);
    d.c='A';
    printf("%c\n",d.c);
    //Integer after these will show garbage values
    printf("%d\n",d.i);
}
