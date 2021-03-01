#include "../headers/common/common.h"

void	init_book_data(book_data *book)
{
	char	title[30] = "Abrakadabra";
	char	checkout[12] = "none";
	long int book_id =	111111111;
	int size;
	int i;

	i = 0;
	size  = 30;
  /*printf("debug11\n");
	book = (book_data*)malloc(sizeof(book_data) * size);
	printf("debug12\n");
  while (i < 10);
	{
		strcpy(book[i].title, title);
  printf("debug13\n");
		strcpy(book[i].checkout, checkout);
  printf("debug14\n");
		book[i].book_id = book_id;
		book[i].date = 0;
		title[0]++;
		checkout[0]++;
		book_id++;
		i++;
	}
	while (i < 30)
	{
		strcpy(book[i].title, title);
		strcpy(book[i].checkout, checkout);
		book[i].book_id = -1;
		book[i].date = 0;
		i++;
	}*/
}
