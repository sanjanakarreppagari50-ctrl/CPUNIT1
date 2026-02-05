//2a.c
#include <stdio.h>
typedef struct
{
    float math;
    float cp;
    float Linux;
} sub;
typedef struct 
{
    int id;
    char name[20];
    sub marks;
} student;
int main()
{
    student s1={101,"aaa",{23,56,89}};
    student s2={102,"bbb",{67,45,80}};
    printf("student 1 details");
    printf("id:%dname:%smath:%fcp:%fLinux:%f",s1.id,s1.name,s1.marks.math,s1.marks.cp,s1.marks.Linux);
    printf("student 2 details");
    printf("id:%dname:%smaths:%fcp:%fLinux:%f",s2.id,s2.name,s2.marks.math,s2.marks.cp,s2.marks.Linux);
    return 0;
}