//3b.c
#include <stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1={101,"AAA",50};
    struct student s2={102,"BBB",60};
    struct student *ptr;
    ptr=&s1;
    printf("student 1deatails :id:%d,name:%s,marks:%f",ptr->id,ptr->name,ptr->marks);
    ptr=&s2;
    printf("student 2 details :id:%d,name:%s,marks:%%f",ptr->id,ptr->name,ptr->marks);
    return 0;
}