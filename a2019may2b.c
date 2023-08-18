//write a function to reverse a 3 digit number

#include<stdio.h>

void main(){
    int num, num1=0, digit;
    printf("enter a 3 digit number:");
    scanf("%d", &num);

    while(num>0)
    {
        digit=num%10;
        num1=(num1*10)+digit;
        num=num/10;
    }

    printf("reversed number: %d", num1);
}