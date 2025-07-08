#include<stdio.h>
int string_length(char s[]){
    int length=0,i;
    for(i=0;s[i]!='\0';i++){
        length++;
    }
return length;
}
void string_reverse(char o[],char r[]){
    int len=string_length(o),i;
    for(i=0;i<len;i++){
        r[i]=o[len-i-1];
    }
    r[len]='\0';
}
int main(){
    char str1[20],str2[20];
    int n,k,p,q;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    string_reverse(str1,str2);
    printf("The reverse of the string is:%s",str2);
}
