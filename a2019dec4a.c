//wap that will read a word n rewrite it in alphabetical order.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], temp;
    int i, j, len;

    printf("enter a string:");
    gets(str);

    len= strlen(str);

    for(i=0; i<len-1; i++)
    {
        for(j=0; j<len; j++)
        {
            if (str[j]<str[j+1])
            {
                temp= str[j];
                str[j]= str[j+1];
                str[j+1]= temp;
            }
        }
    }

    printf("after rearranging: %s", str);

    return 0;

}