#include<stdio.h>

void main()
{
    int n, i, j, k;
    printf("enter number of rows: \n");
    scanf("%d", &n);
    k=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%4d", k);
            k= k+1;
        }
        printf("\n");
    }
    printf("\n");

}