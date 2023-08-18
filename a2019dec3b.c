//wap to accept wqord from user n print in following way

#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    int i, j, len;

    printf("enter a string:");
    gets(str);
    len=strlen(str);

    for(i=0; i<len; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}