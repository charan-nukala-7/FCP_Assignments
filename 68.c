#include <stdio.h>

void display(char title[], char author[], float price)
{
    printf("\nBook Title: %s", title);
    printf("\nAuthor: %s", author);
    printf("\nPrice: %.2f", price);
}

int main()
{
    char title[50], author[50];
    float price;

    printf("Enter book title: ");
    scanf(" %[^\n]", title);

    printf("Enter author name: ");
    scanf(" %[^\n]", author);

    printf("Enter price: ");
    scanf("%f", &price);

    display(title, author, price);

    return 0;
}