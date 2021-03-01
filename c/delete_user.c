#include "../headers/common/common.h"

void	delete_user(user_data *user)
{
	int i;
  char id[12];
  char pw[12];

	i = 0;
	printf("type id to delete :");
  scanf("%s", id);
  while (strcmp(id, user[i].id) != 0 && i < 30)
		i++;
	
  if (i == 30 || strcmp(user[i].id_number, "deleted") == 0)
  {
    printf("no such account\n");
		return;
  }
  printf("type password:");
	scanf("%s", pw);
	while (strcmp(pw, user[i].pw) != 0)
	{
			printf("wrong password type again:");
			scanf("%s", pw);
	}
  strcpy(user[i].id_number,"deleted");
  printf("delete completed\n");
  //system("pause");
  return;
}