int my_Atoi(char str[]){
        int i=0,res=0,sign=1;
        if(str[0]=='-'){
                sign=-1;
                i++;
        }
        else if (str[0]=='+'){
                i++;
        }
        while(str[i]!='\0'){
            if(str[i]>='0'&&str[i]<='9'){
                        res=res*10+(str[i]-'0');
                }
            else{
                    printf("Invalid character");
            }
            i++;
        }
        return res*sign;
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
