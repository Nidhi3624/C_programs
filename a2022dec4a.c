//wap tp store info of 10 students using structures

#include<stdio.h>

struct students{
    int rollno;
    char name[50];
    int marks;
};

void main()
{
    struct students s[10];
    int i;

    for(i=1; i<=10; i++)
    {
        printf("enter details of student %d: \n", i);
        printf("roll no.");
        scanf("%d", &s[i].rollno);
        printf("name:");
        scanf("%s", &s[i].name);
        printf("marks:");
        scanf("%d", &s[i].marks);
    }

    
}

