#inlcude "header/common/common.h"

int	delete_user(user_data *user)
{
	char name[30];

	for (int i = 0; i < 30 ; i++)
		name[i] = 0;
	printf("select a user to erase:");
	scanf("%s", name);
	while (user[i].id_number != -1 && !strcmp(name, user[i].name))
		i++;
	if (user[i].id_number != -1)
	{
		printf("no such user\n");
		return -1;
	}
	user[i].id_number = -1;
	user_sort(user);
	printf("delete succesful\n");
	return 0;
}
