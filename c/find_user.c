#include "../headers/common/common.h"

void find_user(user_data *u)
{
	char username[30];
	char userid[12];
	char userpw[12];
	int userid_number;
	int i, menu, end;




	while (1)
	{
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
		switch (menu)
		{
		case 1:
			while (1) {
				int i;

				i = 0;
				printf("search by username\n");
				scanf("%s", username);
				while (!strcmp(username, u[i].name) && i < 30)
						i++;
				if (i == 30)
					printf("no such user\n");
				else
				{
					printf("--------------------------------------------------\n");
					printf("name : %s", u[i].name);
					printf("id   : %s", u[i].id);
					printf("pw   : %s", u[i].pw);
					printf("id number: %ld", u[i].id_number);
					printf("--------------------------------------------------\n");
				}
				printf("1 to continue 2 to quit\n");
				scanf("%d", &end);
				if (end == 2)
					break;
			}
			break;
		case 2:
			while (1)
		   	{
				int i;

				i = 0;
				printf("search by id\n");
				scanf("%s", userid);
				while (!strcmp(userid, u[i].id) && i < 30)
					i++;
				if (i == 30)
					printf("no such user\n");
				else
				{
					printf("type password:");
					scanf("%s", userpw);
					while (!strcmp(userpw, u[i].pw))
					{
						printf("wrong password type again:");
						scanf("%s", userpw);
					}
					printf("--------------------------------------------------\n");
					printf("name : %s", u[i].name);
					printf("id   : %s", u[i].id);
					printf("pw   : %s", u[i].pw);
					printf("id number: %ld", u[i].id_number);
					printf("--------------------------------------------------\n");
				}
				printf("1 to continue 2 to quit\n");
				scanf("%d", &end);
				if (end == 2)
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
