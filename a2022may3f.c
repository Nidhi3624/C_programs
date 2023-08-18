/*wap to read title, author and price of 5 books using arrays of structures n display records in ascending order of price*/

#include<stdio.h>
#include<string.h>

struct books
{
    char title[50];
    char author[50];
    int price;
};

int main()
{
    struct books book[10];
    int i, j, n, temp;
    char temp1[50], temp2[50];

    for(i=0; i<3; i++)
    {
        printf("enter details of book %d:\n", i+1);
        printf("title:");
        gets(book[i].title);
        printf("author:");
        gets(book[i].author);
        printf("price:");
        scanf("%d", &book[i].price);
    }


    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++ )
        {
            if (book[j].price<book[j+1].price)
            {
                temp=book[j].price;
                book[j].price=book[j+1].price;
                book[j+1].price=temp;

                strcpy(temp1, book[j].title);
                strcpy(book[j].title, book[j+1].title);
                strcpy(book[j+1].title, temp1);

                strcpy(temp2, book[j].author);
                strcpy(book[j].author, book[j+1].author);
                strcpy(book[j+1].author, temp2);
               
            }
        }
    }

    printf("books in ascending order:");

    for(i=0; i<3; i++)
    {
        printf("title: %s\n", book[i].title);
        printf("author: %s\n", book[i].author);
        printf("price: %d\n", book[i].price);
    }


    return 0;

}