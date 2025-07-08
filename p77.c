#include<stdio.h>

void remspecial(char s[]){
    int i,j=0;
    char temp[50];
    for(i=0;s[i]!='\0';i++){
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)){
                temp[j++]=s[i];
            }
    }
   temp[j]='\0';
   for(i=0;temp[i]!='\0';i++){
       s[i]=temp[i];
   }
   s[i]='\0';
}
int main(){
    char str1[20],ch;
    int k,n;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    //uppercase(str1);
    remspecial(str1);
    printf("%s",str1);
}
