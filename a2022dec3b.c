//wap to find average of n numbers using arrays

#include<stdio.h>

void main()
{
    int arr[50];
    int n, i, sum;
    float avg;

    printf("enter total number of elements:");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("enter an element:");
        scanf("%d", &arr[i]);
        sum= sum+ arr[i];
    }

    avg= sum/n;
    printf("average of %d numbers is %f:", n, avg);
    
}