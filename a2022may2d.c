//recursive function to calculate power of number

#include<stdio.h>

int power(int n, int pow)
{
    if(pow==1)
    {
        return n;
    }
    else
    {
        return n*power(n, pow-1);
    }
}

void main()
{
    int n, pow, result;

    printf("enter base number:");
    scanf("%d", &n);
    printf("enter power:");
    scanf("%d", &pow);
    result= power(n, pow);
    printf("%d raised to %d is %d.", n, pow, result);
}