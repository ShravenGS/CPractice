#include<stdio.h>
struct student{
    char name[50];
    float marks;
};
int main(){
    struct student s[3],temp;
    int i,j;
    for(i=0;i<3;i++){
        printf("Enter the name and marks for student:");
        scanf(" %[^\n]", s[i].name);
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(s[j].marks>s[i].marks){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("\n------------Sorted marks--------------\n");
    for(i=0;i<3;i++){
        printf("%s %f\n",s[i].name,s[i].marks);
    }
    
    return 0;
}
