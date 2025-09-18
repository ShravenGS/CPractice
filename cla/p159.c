#include<stdio.h>
int my_Atoi(int num){
        int i=0,res=0;
        while(num!='\0'){
            if(num>='0'&&num<='9'){
                        res=res*10+(num-'0');
                }
            else{
                    printf("Invalid character");
            }
            i++;
        }
        return res;
}
int main(int argc,char *argv[]){
        int k;
    if(argc<2){
        printf("./a.out usage");
        return 0;
    }
    k=my_Atoi(argv[1]);
    printf("%d",k);
}
