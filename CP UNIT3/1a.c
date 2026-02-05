//1a.c
#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1={101,"AAA",95.5};
    struct student s2={102,"BBB",98};
    printf("student 1 details are");
    printf("idno:%d",s1.id);
    printf("name:%s",s1.name);
    printf("marks:%2f",s1.marks);
    printf("student 2 details are");
    printf("id:%d,name:%s,marks:%f",s1.id,s1.name,s1.marks);
    return 0;
}