//wap tp find the largest of the 3 numbers

#include<stdio.h>

void main()
{
    int n1, n2, n3;

    printf("enter three numbers:");
    scanf("%d%d%d", &n1, &n2, &n3);

    if((n1>n2)&&(n1>n3))
    {
        printf("%d is the largest\n", n1);
    }
    else if((n2>n1)&&(n2>n3))
    {
        printf("%d is the largest\n", n2);
    }
    else
    {
        printf("%d is the largest\n", n3);
    }
}