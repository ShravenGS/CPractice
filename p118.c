#include<stdio.h>
struct student{
    int roll;
    float marks;
};
struct student getStudent(){
    struct student s;
    printf("Enter roll and marks");
    scanf("%d %f",&s.roll,&s.marks);
    return s;
}
int main(){
    int i;
    struct student s[3];
    for(i=0;i<3;i++){
        s[i]=getStudent();
    }
    for(i=0;i<3;i++){
         printf("Roll:%d|Marks:%.2f\n",s[i].roll,s[i].marks);
    }
   return 0;
}
