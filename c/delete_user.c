#include "../headers/common/common.h"

int	delete_user(user_data *user, char *name)
{
	int i;

	i = 0;
	while (!strcmp(name, user[i].name) && i < 30)
		i++;
	if (i >= 30)
		return -1;
	user[i].id_number = -1;
	return 0;
}
