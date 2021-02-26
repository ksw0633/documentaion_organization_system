#ifndef COMMON_H
# define COMMON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//#include "../libft/libft.h"

typedef struct user				//유저정보를보관하는구조체
{
	char			name[30];			//유저의이름
	char			id[12];				//유저의아이디
	char			pw[12];				//유저의비밀번호
	long int		id_number;			//socialsecurity number
}				user_data;

typedef struct book
{
	char		title[30];				//title of the book
	char		checkout[12];			//id of the person that took the book
	long int	book_id;				//id of the book(dunno may not be mandatory)
	int			date;					//reamining date
}				book_data;
	
void		find_user(user_data *user);
void		add_user(user_data *user);
void		find_book(book_data *book);
void		add_book(book_data *book);
void		rent_book(user_data *user,	book_data *book);
void		return_book(user_data *user, book_data *book);
void		delete_user(user_data *user);
void		delete_book(book_data *book);
void		init_user_data(user_data *user);
void		init_book_data(book_data *book);
void		user_sort(user_data *user);
void		book_sort(book_data *book);

#endif  
