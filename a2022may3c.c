//wap tp print factorial of a number using recursions

#include<stdio.h>

int factorial(int n)
{
    if((n==1)||(n==0))
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

void main()
{
    int n, result;
    printf("enter a number:");
    scanf("%d", &n);
    result=factorial(n);
    printf("factorial of %d is %d", n, result);
}