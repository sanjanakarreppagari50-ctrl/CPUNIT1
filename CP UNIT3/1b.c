//1b.c
#include <stdio.h>
typedef struct
{
    int id;
    char name[20];
    float marks;
    }student;
int main()
{
    student s1;
    student s2;
    printf("enter student 1 details\n");
    scanf("%d%s%f",&s1.id,&s1.name,&s1.marks);
    printf("idno:%d\n,name:%s\n,marks:%f\n",s1.id,s1.name,s1.marks);
    printf("enter student 2 details\n");
    scanf("%d%s%f",&s2.id,&s2.name,&s2.marks);
    printf("idno:%d\n,name:%s\n,marks:%f",s2.id,s2.name,s2.marks);
    return 0;
}