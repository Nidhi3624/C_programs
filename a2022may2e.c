//wap to accept elememts in one dimensional array and sort them in ascending order.

#include<stdio.h>

void main()
{
    int marks[10];
    int i, j, temp;

    for(i=0; i<10; i++)
    {
        printf("enter a number:");
        scanf("%d", &marks[i]);
    }

    printf("array before sorting: \n");
    for(i=0; i<10; i++)
    {
        printf("%4d", marks[i]);
    }


    for(i=0; i<9; i++)
    {
        for(j=0; j<10; j++)
        {
            if( marks[j]< marks[j+1])
            {
                temp=marks[j];
                marks[j]=marks[j+1];
                marks[j+1]=temp;
            }
        }
    }

    printf("\n");
    printf("array after sorting: \n");
    for(i=0; i<10; i++)
    {
        printf("%4d", marks[i]);
    }


}