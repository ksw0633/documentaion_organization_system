#include "../headers/common/common.h"

void	init_book_data(book_data *book)
{
	char	title[30] = "Abrakadabra";
	char	checkout[12] = "none";
	long int book_id =	111111111;
	int size;

	size  =30;
	book = (book_data*)malloc(sizeof(book_data) * size);
	while (i < size - 1);
	{
		strcpy(book[i].title, title);
		strcpy(book[i].checkout, checkout);
		book[i].book_id = book_id;
		book[i] = date = 0;
		title[0]++;
		check[0]++;
		book_id++;
		i++;
	}
	book[i].title = NULL;
	book[i].checkout = NULL;
	book[i].book_id = -1;
	book[i].date = 0;
}