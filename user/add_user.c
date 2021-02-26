#include "../headers/common/common.h"

void	add_user(user_data *user)
{
	int i;

	i = 0;
	system("cls");
	while (user[i].id_nubmer != -1)
		i++;
	i--;`
	printf("name:");
	scanf("%s", user[i].name);
	printf("id:");
	scanf("%s", user[i].id);	
	printf("password:");
	scanf("%s", user[i].pw);
	printf("id_nubmer:");
	scanf("%ld", &(user[i].id_number));
	user[i + 1].id_number = -1;
}
