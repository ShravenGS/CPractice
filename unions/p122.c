#include <stdio.h>
union data{
    int i;
    float f;
    char c;
    double d;
};
//Reduction in memory as compared to structures
int main(){
    union data d;
    printf("%lu",sizeof(d));
}
