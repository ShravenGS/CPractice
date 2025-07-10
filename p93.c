#include<stdio.h>
int main()
{
        char a[] = "Hello";
        char b[] = "Hai";
        char c[] = "Bye";

        // Code for printing all the above strings using Array of pointer.

        char *p[] = {a,b,c};
        int i;

        for(i=0;i<3;i++)
        printf("p[%d] = %s\n",i,p[i]);
}

/*#include<stdio.h>
int main()
{
        char a[ ] = "Hello";
        char b[ ] = "Hai";
        char c[ ] = "Bye";
       
        char *p[ ] = {a,b,c};

        *p[0] = *p[0]^32;
        *p[1] = *p[1]^32;
        *p[2] = *p[2]^32;

        int i;
        for(i=0;i<3;i++)
        printf("%s\n",p[i]);
}

#include<stdio.h>
int main()
{
        char *a[ ] = {"Hello","Hai","Bye"};
        int i;

        for(i=0;i<3;i++)
        printf("%s\n",a[i]);
}

#include<stdio.h>
int main()
{
        char *a[] = {"Hello","Hai","Bye"};
        int i;

        *a[0] = 'h';

        printf("%s\n",a[0]);//segmentation fault
}

#include<stdio.h>
int main()
{
        char *a[] = {"Hello","Hai","Bye"};
        int i;

        a[0] = "vector";
        a[1] = "India";
        a[2] = "embedded";

        for(i=0;i<3;i++)
        printf("%s\n",a[i]);
}

#include<stdio.h>
#include<string.h>
int main()
{
        char *a[] = {"Hello","Hai","Bye"};
        int i;

        strcpy(a[0],"vector");
        strcpy(a[1], "India");
        strcpy(a[2],"embedded");

        for(i=0;i<3;i++)
        printf("%s\n",a[i]);//segmentation fault
}
