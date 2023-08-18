// wap to print number pattern

#include<stdio.h>

void main ()
{
    int i, j, n=1;

    for(i=0; i<4; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%4d", n);
            if(n==1)
            {
                n=0;
            }
            else if(n==0)
            {
                n=1;
            }
        }
        printf("\n");
    }
    printf("\n");
}