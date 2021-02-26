#include "../headers/common/common.h"

void	user_sort(user_data *user)
{
	int end;
	int i;

	end = 28;
	while (user[i].id_number == -1)
		end--;
	i = 0;
	while (user[i].id_number != -1)
		i++;
	if (i == end + 1)
		return;
	user[i] = user[end];
	user[end].id_number = -1;	
}
