#include "../headers/common/common.h"

void	add_book(book_data *book)
{
	int i;
	
	i = 0;
	while (book[i].date != -1)
		i++;
	printf("add book\n");
	printf("type title\n");
	scanf("%s", book[i].title);
	printf("type book id\n");
	scanf("%ld", &book[i].book_id);
}
