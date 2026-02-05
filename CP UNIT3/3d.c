//3d.c
#include <stdio.h>
struct student
{
    int id;
    char name[20];
};
void display(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    { 
        printf("id:%d,name:%s\n",s[i].id,s[i].name);
    }
}
int main()
{
    struct student s[2]={{101,"AAA"},{102,"BBB"}};
    display(s,2);
    return 0;
}