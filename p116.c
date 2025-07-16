#include<stdio.h>
struct student{
    char name[50];
    float marks;
};
int main(){
    struct student s[3],topper;
    int i;
    for(i=0;i<3;i++){
        printf("Enter the name and marks for student:");
        scanf(" %[^\n]", s[i].name);
        scanf("%f",&s[i].marks);
    }
    topper=s[0];
    for(i=1;i<3;i++){
        if(s[i].marks>topper.marks){
            topper=s[i];
        }
    }
    printf("\nTopper:%s |Marks:%.2f",topper.name,topper.marks);
    return 0;
}
