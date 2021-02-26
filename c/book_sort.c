#include "../headers/coomon/common.h"

void	book_sort(book_data *book)
{
	int end;
	int i;

	end = 28;
	while (book[i].book_id == -1)
		end--;
	i = 0;
	while (book[i].book_id != -1)
		i++;
	if (i == end + 1)
		return;
	book[i] = book[end];
	book[end].book_id = -1;
}
