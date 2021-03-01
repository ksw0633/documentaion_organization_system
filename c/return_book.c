#include "../headers/common/common.h"

void return_book(book_data *book)
{
	int i;
	char title[30];

	i = 0;
	printf("type the title of the book:");
	scanf("%s", title);
	while (i < 30 && !strcmp(title, book[i].title))
		i++;
	if (i == 30)
	{
		printf("no such book\n");
		return;
	}
	else if (book[i].date == 0)
	{
		printf("this book is not rented\n");
		return;
	}
	book[i].date = 0;
	printf("return succesful\n");
}
