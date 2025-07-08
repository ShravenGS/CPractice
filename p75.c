#include<stdio.h>
int substring_search(char s1[],char s2[]){
    int i,j,found;
    for(i=0;s1[i]!='\0';i++){
        found=1;
        for(j=0;s2[j]!='\0';j++){
            if(s1[i+j]!=s2[j]){
                found=0;
                break;
            }
        }
        if(found&&s2[j]=='\0'){
            return i;
        }
    }
    return -1;
}
int main(){
    char str1[20],str2[20];
    int n,k;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the string:");
    scanf("%[^\n]",str1);
    getchar();
     printf("Enter the substring:");
    scanf("%[^\n]",str2);
    k=substring_search(str1,str2);
    if(k!=-1){
        printf("Substring is present at %d",k);
    }
    else{
        printf("Substring is not present");
    }
}
