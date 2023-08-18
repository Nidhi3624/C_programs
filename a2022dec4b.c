//wap to check whether given string is a pallindrome or not

#include<stdio.h>
#include<string.h>

void main()
{
    char str[20], revstr[20];
    int i, j;

    printf("enter a string:");
    gets(str);

    j= strlen(str);

    for(i=0; i<j; i++)
    {
        revstr[i]=str[j-i];
    }

    printf("%s", revstr);
}