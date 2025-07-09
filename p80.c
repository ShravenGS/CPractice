#include<stdio.h>
int main(){
    int x=10,y=20,z;
    int *p;
    printf("Initial values x=%d and y=%d",x,y);
    
     printf("\n");
     p=&x;
     z=*p++;
     printf("\n*p++\nx=%d y=%d z=%d",x,y,z);
     
     printf("\n");
     x = 10, y = 20;
     p=&x;
     z=*++p;
    printf("\n*++p\nx=%d y=%d z=%d",x,y,z);
    
    printf("\n");
     x = 10, y = 20;
     p=&x;
    z = (*p)++;
    printf("\n(*p)++\nx=%d y=%d z=%d",x,y,z);
    
    printf("\n");
     x = 10, y = 20;
     p=&x;
    z = ++(*p);
    printf("\n++(*p)\nx=%d y=%d z=%d",x,y,z);
    
     printf("\n");
     x = 10, y = 20;
     p=&x;
    z = ++*p++;
    //z = ++(*p)++;Shows error
    printf("\n++*p++\nx=%d y=%d z=%d",x,y,z);
    return 0;
}

/* 1)z = *p;
    p = p + 1;
    2) p = p + 1;
        z = *p;
    3)z = *p;
    *p = *p + 1;
    4)*p = *p + 1;
        z = *p;
    5) z = ++(*p);
    p = p + 1;
*/





