//wap to calculate the sum of following series without power function.

#include<stdio.h>

int main()
{
    int i, n, x, dn, nm;
    float term, sum;

    printf("enter total number of terms:");
    scanf("%d", &n);
    printf("enter a base number(x):");
    scanf("%d", &x);

    nm=-1;
    dn=1;
    sum=0;
    for(i=0; i<n; i++)
    {
        nm=-nm*x;
        dn=dn*i;
        term= nm/dn;
        sum=sum+term;
    }
    printf("sum of the series: %f", sum);

    return 0;
}