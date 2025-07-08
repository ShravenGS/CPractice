#include<stdio.h>
int uppercase(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++){
            if(s[i]>=65&&s[i]<=90){
                s[i]+=32;
            }
    }
}
int lowercase(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++){
            if(s[i]>=97&&s[i]<=122){
                s[i]-=32;
            }
    }
}
int main(){
    char str1[20],ch;
    int k,n;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    //uppercase(str1);
    lowercase(str1);
    printf("%s",str1);
}
