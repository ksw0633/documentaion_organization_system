#include "../headers/common/common.h"

void add_user(user_data *user)
{
	int i = 0;

	while (user[i].id_number != -1)
		i++;
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
	scanf("%ld", &user[i].id_number);     

	if (user[i].id_number >= 1000000000000 && user[i].id_number <= 9999999999999)	
		printf("\nconfirmed.\n\n\n");	
	else
	{
		while (user[i].id_number < 1000000000000 || user[i].id_number>9999999999999)		
		{	printf("\nwrong");
			scanf("%ld", &user[i].id_number);
		}
	}


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
