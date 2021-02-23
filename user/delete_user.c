#inlcude "header/common/common.h"

int	delete_user(user_data *start)
{
	char name[30];
	user_data *before;
	user_data *current;
	user_data *next;

	before = NULL;
	current = start;
	next = NULL;
	for (int i = 0; i < 30 ; i++)
		name[i] = 0;
	printf("select a user to erase:");
	scanf("%s", name);
	while (current && strcmp(current->id, name))
	{
		before = current;
		current = current->next;
		if (current)	
			next = current->next;
	}	
	if (!current)
	{
		printf("no such user\n");
		return -1;
	}
	before->next = next;
	free(current);
	printf("delete succesful\n");
	return 0;
}
