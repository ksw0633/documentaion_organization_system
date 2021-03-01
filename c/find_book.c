#include "../headers/common/common.h"

void find_book(book_data *b)
{

	char booktitle[30];
	long int bookid;
	int i, res, menu, end;



	while (1)
	{
		printf("search book\n");
		printf("1. serach by title\n");
		printf("2. search by book id\n");
		printf("3. exit\n");
		scanf("%d", &menu);
		while (menu > 3 || menu < 1)
		{
			printf("wrong\n");
			scanf("%d", &menu);
		}
		switch (menu)
		{
		case 1:
			while (1) {
				printf("type title\n");
				scanf("%s", booktitle);
				int  i;

				i = 0;
				while (strcmp(booktitle, b[i].title) != 0 && i < 30)
					i++;
        //printf("i = %d\n", i);
				if (i == 30 || b[i].date == -1)
				   printf("no such book\n");
				else	
				{
					printf("---------book data----------\n");
					printf("title : %s\n", b[i].title);
					printf("checkout : %s\n", b[i].checkout);
					printf("book id : %ld\n", b[i].book_id);
					printf("date left : %d\n", b[i].date);
				}
				printf("1 to continue or 2 to exit\n");
				scanf("%d", &end);
				if (end == 2)
					break;
			}
			break;

		case 2:
			while (1) {
				printf("type book id\n");
				scanf("%ld", &bookid);
				int i;

				i = 0;
				while (bookid != b[i].book_id && i < 30)
					i++;
				if (i == 30)
					printf("no such book\n");
				else
				{
					printf("--------------book data--------------\n");
					printf("title : %s\n", b[i].title);
					printf("checkout : %s\n", b[i].checkout);
					printf("book id : %ld\n", b[i].book_id);
					printf("date left : %d\n", b[i].date);
				}
				printf("1 to continue or 2 to exit\n");
				scanf("%d", &end);
				if (end == 2)
					break;
			}
			break;

		case 3: return;

		default: return;
		}
	}





}
