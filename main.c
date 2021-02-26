#include "headers/common/common.h"

int main()
{
	int n;
	
	user_data *user;
	book_data *book;

	n = 1;
	init_user_data(user);
	init_book_data(book);
	while (n > 0)
	{
		//system("cls");
		system("clear");
		printf("도서관리시스템\n");
		printf("------------------------------------------------------------------------\n");
		printf("1. 유저등록\n");
		printf("2. 유저검색\n");
		printf("3. 유저삭제\n");
		printf("4. 책등록\n");
		printf("5. 책검색\n");
		printf("6. 책삭제\n");
		printf("7. 도서대출\n");
		printf("8. 도서반납\n");
		printf("9. 종료\n");
		printf("메뉴를 선택해주세요:\n");
		scanf("%d", &n);
		if (n < 1 || n > 9)
		{
			printf("잘못된입력입니다\n");
			printf("다시선택해주세요");
			printf("(계속할려면아무키나눌러주세요)\n");
			int c = getchar();
			printf("------------------------------------------------------------------------\n");
			continue;
		}
		if (n == 1)
		{
			add_user(user);
		}
		else if (n == 2)
		{
			find_user(user);
		}	
		else if (n == 3)
		{
			delete_user(user);
		}
		else if (n == 4)
		{
			add_book(book);
		}
		else if (n == 5)
		{
			find_book(book);
		}
		else if (n == 6)
		{
			delete_book(book);
		}
		else if (n == 7)
		{
			rent_book(user, book);
		}
		else if (n == 8)
		{
			return_book(user, book);
		}
		else if (n == 9)
		{
			printf("이용해주셔서 감사합니다.\n");
			printf("------------------------------------------------------------------------\n");	
			break;
		}
		printf("------------------------------------------------------------------------\n");
	}
	return 0;
}
