//3c.c
#include <stdio.h>
struct student
{
    int id;
    char name[20];
};
void display(struct student*s)
{
    printf("id:%d,name:%s",s->id,s->name);
}
int main()
{
    struct student s1={101,"AAA"};
    struct student s2={102,"BB"};
    display(&s1);
    display(&s2);
    return 0;
}