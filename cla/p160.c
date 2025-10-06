#include<stdio.h>
double my_atof(char str[]){

            int i=0,sign=1,flag=0;
    double res=0.0,div=10.0;

    if(str[i]=='-'){
        sign =-1;
        i++;
    }
    else if(str[i]=='+'){
        i++;
    }
    while(str[i]!='\0'){
        if(str[i]>='0'&&str[i]<='9'){
            if(flag==0){
                res=res*10+(str[i]-48);
            }
            else{
                res=res+(str[i]-48)/div;
                div*=10;
            }
     }

     else if(str[i]=='.'){
            if(flag==1){
                printf("Invalid usage\n");
                return 0;
                }
            flag=1;
     }

        else{
            printf("Invalid character\n");
            return 0;
        }
        i++;
    }
        return sign*res;
}
int main(int argc,char *argv[]){
    if(argc<2){
        printf("./a.out usage\n");
    }
    double d;
    printf("%lf",my_atof(argv[1]));
}
