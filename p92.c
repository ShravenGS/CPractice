#include<stdio.h>
int main()
{
        int i,j;
        int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

        int *p[3] = {a[0],a[1],a[2]};

        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                printf("%d ",p[i][j]);
                printf("\n");
        }
}
