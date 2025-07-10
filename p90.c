#include<stdio.h>
int main()
{
        int x = 10, y = 20, z = 30,i;
        int *a[3] = {&x,&y,&z};

        printf("x - %d y - %d z - %d\n",x,y,z);
        printf("&x - %p &y - %p &z - %p\n",&x,&y,&z);

        for(i=0;i<3;i++)
        printf("*a[%d] = %d , a[%d] = %p\n",i,*a[i],i,a[i]);

        printf("sizeof a : %ld\n",sizeof a);
        printf("sizeof a[0] = %ld\n",sizeof a[0]);
}
