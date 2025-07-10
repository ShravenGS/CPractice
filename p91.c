#include<stdio.h>
int main()
{
        int a[] = {10,20,30,40,50};
        int *p[3] = {a,a+2,a+4};
        int i;

        for(i=0;i<3;i++)
        printf("%d ",*p[i]);
        printf("\n");
}
/*#include<stdio.h>
int main()
{
        int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
        int *p[3] = {a,a+1,a+2};
        int i;

        printf("a = %p  a+1 = %p  a+2 = %p\n",a,a+1,a+2);

        for(i=0;i<3;i++)
        printf("%d  %p\n",*p[i],p[i]);
        }

#include<stdio.h>
int main()
{
        int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
        int *p[3] = {(int *)a,(int *)a+1,(int *)a+2};
        int i;

        for(i=0;i<3;i++)
        printf("%d  %d\n",*p[i],*(p[i]+1));
        printf("\n");
}

#include<stdio.h>
int main()
{
        int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
        int *p[3] = {(int *)a,(int *)(a+1),(int *)(a+2)};
        int i;

        printf("%p\n",*(p+1)+1);
        printf("%p\n",*(p+0)+2);
        printf("%d\n",*(p[2]+1));
}

#include<stdio.h>
int main()
{
        int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
        int *p[3] = {(int *)a,(int *)a+1,(int *)a+2};
        int i;

        printf("%p\n",*(p+1)+1);
        printf("%p\n",*(p+0)+2);
        printf("%d\n",*(p[2]+1));
}

#include<stdio.h>
int main()
{
        int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
        int **dp = a;

        printf("%d\n",**dp);//segmentation fault 
}
#include<stdio.h>
int main()
{
        int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
        int *p[3] = {(int *)a,(int *)a+1,(int *)a+2};
        int **dp = p;

        printf("%d\n",**dp);
}
*/
