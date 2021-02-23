#ifndef COMMON_H
# define COMMON_H

#include <stdio.h>
#include <math.h>
#include "../libft/libft.h"

typedef struct user				//structure for users
{
	char			name[30];			//name of the user
	char			id[12];				//user id
	char			pw[12];				//user password
	long int		id_number;				//socialsecurity number
	user_data		*next;
}				user_data;

typedef struct book
{
	char		title[30];				//title of the book
	char		checkout[12];			//id of the person that took the book
	long int	book_id;				//id of the book(dunno may not be mandatory)
	int			date;					//reamining date
	book_data	*next;
}				book_data;
	
user_data	*find_user(user_data *start);
void		add_user(user_data *start);
book_data	*find_book(book_data *start);
void		add_book(book_data *start);
void		rent_book(user_data *start,	book_data *start);
void		return_book(user_data *start, book_data *start);
void		print_user(user_data *current);
int			delete_user(user_data *start);

#endif
