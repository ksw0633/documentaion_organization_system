#include "common.h"

void find_user(user_data *u, int cnt)
{
	char username[30];
	char userid[12];
	char userpw[12];
	int userid_number;
	int i, res, menu, end;




	while (1)
	{
		//system("cls");
		printf("--------------find user-------------\n");
		printf("type 1 to search with name\n");
		printf("type 2 to search id\n");
		printf("type 3 to quit\n");
		scanf("%d", &menu);
		while ( menu > 3  || menu < 1)
		{
			printf("wrong\n");
			scanf("%d", &menu);
		}
		switch (selectusermenu)
		{
		case 1:
			while (1) {
				int i;

				i = 0;
				printf("search by username\n");
				scanf("%s", username);
				res = 1;
				while (!res && u[i].id_number != -1)
					res = strcmp(username, u[i++].name);
				if (u[i].number == -1)
					printf("no such user\n");
				else
				{
					printf("--------------------------------------------------\n");
					printf("name : %s", u[i - 1].name);
					printf("id   : %s", u[i - 1].id);
					printf("pw   : %s", u[i - 1].pw);
					printf("id number: %ld", u[i - 1].id_number);
					printf("--------------------------------------------------\n");
				}
				printf("1 to continue 2 to quit\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					break;
			}

		case 2:
			while (1)
		   	{
				int i;

				i = 0;
				printf("search by id\n");
				scanf("%s", userid);
				res = 1;
				while (!res && u[i].id_number != -1)
					res = strcmp(userid, u[i++].id);
				if (u[i].number == -1)
					printf("no such user\n");
				else
				{
					res = 1;
					int j = 0;
					while (!res && u[j].number != -1)
					{
						printf("type password:");
						scanf("%s", userpw);
						res = strcmp(userpw, u[j++].pw);
					}
					printf("--------------------------------------------------\n");
					printf("name : %s", u[i - 1].name);
					printf("id   : %s", u[i - 1].id);
					printf("pw   : %s", u[i - 1].pw);
					printf("id number: %ld", u[i - 1].id_number);
					printf("--------------------------------------------------\n");
				}
				printf("1 to continue 2 to quit\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					break;
			}
			break;
		case 3: 
			break;

		default:
			break;
		}
	}
}