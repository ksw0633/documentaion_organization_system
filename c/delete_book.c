#include "../headers/common/common.h"

void delete_book(book_data *book)
{
	int i;
  char title[12];
	
  i = 0;
  printf("print title to delete:");
  scanf("%s", title);
	while (strcmp(title, book[i].title) != 0 && i < 30)
		i++;
	if (i == 30 || book[i].date == -1)
	{
  	printf("no such book\n");
    return;
  }
  book[i].date = -1;
  printf("delete complete\n");
  //system("pause");
	return;
}
