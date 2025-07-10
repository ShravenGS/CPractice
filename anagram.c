#include<stdio.h>
void remspecial(char s[]){
    int i,j=0;
    char temp[50];
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'){
            temp[j++]=s[i];
        }
    }
temp[j]='\0';
for(i=0;temp[i]!='\0';i++){
    s[i]=temp[i];
}
s[i]='\0';
}
int length(char s[]){
    int i, len=0;
    for(i=0;s[i]!='\0';i++){
        len++;
    }
    return len;
}
void arrange(char s[]){
    int i,j;
    int n=length(s);
    char temp;
    for(i=0;s[i]!='\0';i++){
        for(j=0;s[j+1]!='\0';j++){
            if(s[j]>s[j+1]){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
}
}
void uppercase(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
}
}
}
int main(){
    char s1[50],s2[50],c1[50],c2[50];
    int i,l1,l2;
    int flag=1;
    printf("Enter the 1st string");
        scanf("%[^\n]",s1);
    printf("\n");
    getchar();
    printf("Enter the 2nd string");
        scanf("%[^\n]",s2);

    printf("\n");
    remspecial(s1);
    remspecial(s2);
    l1=length(s1);
    l2=length(s2);
    if(l1!=l2){
        printf("Not an anagram");
        return 0;
    }
    uppercase(s1);
    uppercase(s2);
    arrange(s1);
    arrange(s2);
    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++){
    if(s1[i]!=s2[i]){
        flag=0;
        printf("Not an anagram");
        return 0;
    }
    }
    printf("Anagram");
    return 0;
}
