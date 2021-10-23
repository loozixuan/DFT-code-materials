#include<stdio.h>
#pragma warning(disable:4996)

struct BookInventory
{
	char bookID[10],authorName[10],bookTitle[30],publisher[35];
	int yearPublication, quantity;
};

void main()
{
	struct BookInventory book;
	strcpy(book.bookID, "BK-2044");
	strcpy(book.authorName, "JK Rowling");
	strcpy(book.bookTitle, "Harry Potter and the Prisoner of Azkaban");
	strcpy(book.publisher, "Bloomsbury");
	book.yearPublication = 1999;
	book.quantity = 25;

	printf("Books Detail\n============\n");
	printf("Book ID              :%15s\n",book.bookID);
	printf("Author Name          :%15s\n", book.authorName);
	printf("Book Title           :%30s\n", book.bookTitle);
	printf("Publisher            :%15s\n", book.publisher);
	printf("Year of Publication  :%5d\n", book.yearPublication);
	printf("Quantity in Stock    :%5d\n", book.quantity);


	system("pause");
}