//WAP to create union of book details.
#include <stdio.h>
union book
{
    char name[20];
    char author[20];
    int page;
    int price;
};
union book b;
void main()
{
    printf("\nEnter Book Details :-\n");
    printf("Name : ");
    scanf("%s", &b.name);
    puts(b.name);
    printf("Author : ");
    scanf("%s", &b.author);
    puts(b.author);
    printf("Pages : ");
    scanf("%d", &b.page);
    printf("%d\n", b.page);
    printf("Price : ");
    scanf("%d", &b.price);
    printf("%d\n", b.price);
}