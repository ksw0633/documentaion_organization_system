#include "../headers/common/common.h/"

void	init_user_data(user)
{
	int size;
	char name[30] = "John";
	char id[12] = "john123";
	char pw[12] = "Password123";
	long int id_number = 1111111111111;
	int i = 0;

	size = 30;
	user = (user_data*)malloc(sizeof(user_data) * size);
	while (i < size - 1)
	{
		strcpy(user[i].name, name);
		strcpy(user[i].id, id);
		strcpy(user[i].pw, pw);
		uesr[i].id_number = id_number;
		name[0]++;
		id[0]++;
		pw[0]++;
		id_number++;
		i++;
	}
	user[i].name = NULL;
	user[i].id = NULL;
	user[i].pw = NULL;
	user[i].id_number = -1;
}

