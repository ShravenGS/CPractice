#include<stdio.h>
#pragma pack(1)
struct student1{
    int rollNo;
    char name[20];
    float marks;
};
#pragma pack(2)
struct student2{
    int rollNo;
    char name[20];
    float marks;
};
#pragma pack(4)
struct student3{
    int rollNo;
    char name[20];
    float marks;
};
int main(){
    struct student1 s1;
    struct student2 s2;
    struct student3 s3;
    printf("Size of pragma pack (1):%ld\n",sizeof(s1));
    printf("Size of pragma pack (2):%ld\n",sizeof(s2));
    printf("Size of pragma pack (4):%ld\n",sizeof(s3));
}
