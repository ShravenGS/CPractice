#include<stdio.h>
int string_compare1(char dest[],char src[]){
    int i;
    for(i=0;src[i]!='\0'&&dest[i]!='\0';i++){
        if(dest[i]!=src[i]){
            return dest[i]-src[i];
        }
    }
return dest[i]-src[i];
}
int string_compare2(char dest[],char src[],int n){
    int i;
    for(i=0;src[i]!='\0'&&dest[i]!='\0';i++){
        if(dest[i]!=src[i]){
            return dest[i]-src[i];
        }
    if(i==n){
        return 0;
        }
    }
    return dest[i]-src[i];
}
int main(){
    char str1[20],str2[20];
    int n,k,p,q;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter the 2nd string:");
    scanf("%[^\n]",str2);
   /* p=string_compare1(str2,str1);
    if(p==0){
        printf("Both strings are equal\n");
    }
    else if(p<0){
        printf("2nd string is less than 1st string\n");
    }
    if(p>0){
        printf("1st string is less than 2nd string\n");
    }*/
    printf("Enter the number of characters needed to compared from 1st string to 2nd string");
    scanf("%d",&k);
     q=string_compare2(str2,str1,k);
    if(q==0){
        printf("Both strings are equal with same characters\n");
    }
    else if(q<0){
        printf("2nd string is less than 1st string\n");
    }
    if(q>0){
        printf("1st string is less than 2nd string\n");
    }
}
