#include "common.h"

void find_book(book_data *b, int cnt)
{

	char booktitle[80];
	char bookcheckout[80];
	int bookid;
	int bookdate;
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

				i =0;
				while (!strcmp(booktitle, b[i].title) && b[i].book_id != -1)
					i++;
				if (b[i].book_id == -1)
				   printf("no such user\n");
				else	
				{
					printf("---------book data----------\n");
					printf("title : %s\n", b[i].title);
					printf("checkout : %s\n", b[i].checkout);
					printf("book id : %d\n", b[i].book_id);
					printf("date left : %d\n", b[i].date);
				}
				printf("1 to continue or 2 to exit\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					break;
			}
			break;

		case 2:
			while (1) {
				printf("type book id\n");
				scanf("%ld", &bookid);
				int i;

				i = 0;
				while (bookid != b[i].book_id && b[i].book_id != -1)
					i++;
				if (b[i].book_id == -1)
					printf("no such user\n");
				else
				{
					printf("--------------book data--------------\n");
					printf("title : %s\n", b[i].title);
					printf("checkout : %s\n", b[i].checkout);
					printf("book id : %d\n", b[i].book_id);
					printf("date left : %d\n", b[i].date);
				}
				printf("1 to continue or 2 to exit\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					break;
			}
			break;

		case 3: break;

		default: break;


		}
	}





}
