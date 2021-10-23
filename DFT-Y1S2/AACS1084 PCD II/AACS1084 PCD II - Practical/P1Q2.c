#include<stdio.h>
#pragma warning(disable:4996)

struct BookInventory
{
	char bookID[10], authorName[10], bookTitle[30], publisher[35];
	int yearPublication, quantity;
};

struct Transactions
{
	char transactionCode;
	int quantity;
};

void main()
{
	int quantity,stock;
	struct BookInventory book;
	strcpy(book.bookID, "BK-2044");
	strcpy(book.authorName, "JK Rowling");
	strcpy(book.bookTitle, "Harry Potter and the Prisoner of Azkaban");
	strcpy(book.publisher, "Bloomsbury");
	book.yearPublication = 1999;
	book.quantity = 25;

	printf("Books Detail\n============\n");
	printf("Book ID              :%s\n", book.bookID);
	printf("Author Name          :%s\n", book.authorName);
	printf("Book Title           :%s\n", book.bookTitle);
	printf("Publisher            :%s\n", book.publisher);
	printf("Year of Publication  :%d\n", book.yearPublication);
	printf("Quantity in Stock    :%d\n", book.quantity);

	struct Transactions txn;

	do
	{ 
	printf("\nTransaction code(S=sold,P=purchased,X=exit)      :");
	rewind(stdin);
	scanf("%c", &txn.transactionCode);

	if (txn.transactionCode == 'S')
	{
		printf("Transactions Quantity                            :");
		rewind(stdin);
		scanf("%d", &txn.quantity);
		quantity = book.quantity - txn.quantity;
		printf("Sold : %d copies of 'Harry Potter and the prisoner of Azkaban' by JK Rowling\n", txn.quantity);
		printf("There are now %d copies in stock.\n", quantity);
	}
	else if (txn.transactionCode == 'P')
	{
		printf("Transactions Quantity                            :");
		rewind(stdin);
		scanf("%d", &txn.quantity);
		quantity = book.quantity + txn.quantity;
		printf("Purchase : %d copies of 'Harry Potter and the prisoner of Azkaban' by JK Rowling\n", txn.quantity);
		printf("There are now %d copies in stock.\n", quantity);
	}
	else if (txn.transactionCode == 'X')
		printf("Exited-End of the transcation.\n");
	else
		printf("Invalid transactionCode!!!\n");

	} while (txn.transactionCode != 'X');
	


	system("pause");
}