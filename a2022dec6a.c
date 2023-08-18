//wap tp check whether square matrix is symmetruc or not

#include<stdio.h>

void main()
{
    int rows, cols, i, j, flag=0;
    printf("enter number of rows:");
    scanf("%d", &rows);
    printf("enter number of cols:");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("enter elements of the matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            if( matrix[i][j]!=matrix[j][i])
            {
                flag= flag+1;
            }
        }
    }
    if(flag==0)
    {
        printf("it is a symmetric matrix!");
    }
    else{
        printf("not a symmetric matrix :(");
    }
}