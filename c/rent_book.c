#include "../headers/common/common.h"

void	rent_book(user_data *user, book_data *book)
{
	int i;
	int j;
	char title[30];
	char id[12];
	char pw[12];

	i = 0;
	j = 0;
	printf("type title: ");
	scanf("%s", title);
	while (i < 30 && strcmp(title, book[i].title) != 0)
		i++;
	while (i == 30)
	{
		printf("wrong title: ");
		scanf("%s", title);	
		i = 0;
		while (i < 30 && strcmp(title, book[i].title) != 0)
			i++;	
	}
	if (book[i].date > 0)
	{
		printf("sorry this book is already rented\n");
		return;
	}
	printf("type your id: ");
	scanf("%s", id);
	j = 0;
	while ( j < 30 && strcmp(id, user[j].id) != 0)
		j++;
	while (j == 30)
	{
		printf("wrong id: ");
		scanf("%s", id);
		j = 0;
		while ( j < 30 && strcmp(id, user[j].id) != 0)
			j++;
	}	
	printf("type your password: ");
	scanf("%s", pw);
	while (strcmp(pw, user[j].pw) != 0)
	{
		printf("wrong type again :");
		scanf("%s", pw);
	}
	strcpy(book[i].checkout, user[j].id);
	book[i].date = 24;
	printf("enjoy\n");
  char temp[12];
  scanf("%s", temp);
	return;
}
