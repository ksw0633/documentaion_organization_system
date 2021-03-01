#include "../headers/common/common.h"

void add_user(user_data *user)
{
	int i = 0;
   //printf("i = %d\n", i);/////
	while (strcmp(user[i].id_number,"deleted") != 0)
		i++;
  //printf("i = %d\n", i);/////
	printf("add user\n");

	printf("insert name:");
	scanf("%s", user[i].name);

	printf("insert id:");
	scanf("%s", user[i].id);

	char str[12];
	printf("type pw:");
	scanf("%s", str);
	while (check(str) == 0)
	{
		printf("wrong pw type again:\n");
		scanf("%s", str);
	}

	printf("type social security number:");
	scanf("%s", user[i].id_number);     
  //printf("you typed : %s\n", user[i].id_number);
  //printf("%d\n", strlen(user[i].id_number));
	while (strlen(user[i].id_number) != 13)	
	{	
    printf("wrong\n");
		scanf("%s", user[i].id_number);
  }
  printf("confirmed\n");
}




int check(char *str)
{
	int i;
	int contain_low = 0;
	int contain_up = 0;
	int contain_num = 0;
	
	for (i = 0; str[i]; i++)
	{
		if ('0' <= str[i] && '9' >= str[i])
			contain_num = 1;
		else if ('a' <= str[i] && 'z' >= str[i])
			contain_low = 1;
		else if ('A' <= str[i] && 'Z' >= str[i])
			contain_up = 1;
	}
	return (contain_num * contain_low * contain_up);
}
