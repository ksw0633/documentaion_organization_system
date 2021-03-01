#include "../headers/common/common.h"

int delete_book(book_data *book, char *title)
{
	int i;

	i = 0;
	while (!strcmp(title, book[i].title) && i < 30)
		i++;
	if (i >= 30)
		return -1;
	book[i].book_id = -1;
	return 0;
}
