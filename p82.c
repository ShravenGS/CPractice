#include<stdio.h>
int main(){
    short int*sip;
    sip=(short int *)0x1000;

    char*cp;
    cp=(char *)0x1000;

    int*ip;
    ip=(int *)0x1000;

    float*fp;
    fp=(float *)0x1000;

    double*dp;
    dp=(double *)0x1000;

    long double*ldp;
    ldp=(long double *)0x1000;

    printf("%ld   %ld\n",sizeof(sip),sizeof(*sip));
    printf("%ld   %ld\n",sizeof(cp),sizeof(*cp));
    printf("%ld   %ld\n",sizeof(ip),sizeof(*ip));
    printf("%ld   %ld\n",sizeof(fp),sizeof(*fp));
    printf("%ld   %ld\n",sizeof(dp),sizeof(*dp));
    printf("%ld   %ld\n",sizeof(ldp),sizeof(*ldp));

    printf("%p   \n",sip+1);
    printf("%p   \n",cp+1);
    printf("%p   \n",ip+1);
    printf("%p   \n",fp+1);
    printf("%p   \n",dp+1);
    printf("%p   \n",ldp+1);
}
