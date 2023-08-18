//wap tp check whether given number is armstrong or not

#include<stdio.h>

void main()
{
    int num, digit, sum=0, num1;

    printf("enter a number:");
    scanf("%d", &num);

    num1=num;
    while(num>0)
    {
        digit= num%10;
        sum=sum+(digit*digit*digit);
        num=num/10;
    }
    if(num1==sum)
    {
        printf("it is an armstrong number :D");
    }
    else{
        printf("it is not an armstrong number :(");
    }
}