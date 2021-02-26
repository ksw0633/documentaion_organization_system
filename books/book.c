#include "common.h"

void find_book(book_data *b, int cnt)
{

	char booktitle[80];
	char bookcheckout[80];
	int bookid;
	int bookdate;
	int i, res, selectbookmenu, end;



	while (1)
	{
		printf("\n\n--------------도서검색메뉴-------------");
		printf("\n\n도서제목으로 검색합니다 -> 1 입력\n");
		printf("도서 대여 회원으로 검색합니다 -> 2 입력\n");
		printf("도서 아이디로 검색합니다 -> 3 입력\n");
		printf("도서 대여 날짜로 검색합니다 -> 4 입력\n");
		printf("처음메뉴로 -> 5 입력\n");
		printf("프로그램을 종료합니다 -> 6입력\n");
		printf("1 2 3 4 5 6중 하나를 입력해주세요 >>");
		scanf("%d", &selectbookmenu);
		getchar();
		switch (selectbookmenu)
		{
		case 1:
			while (1) {
				printf("\n\n도서제목으로 검색합니다.. 이름을 입력해주세요\n");
				scanf("%s", booktitle);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(booktitle, b[i].title);
					if (res == 0) {
						printf("\n\n---------도서정보----------\n");
						printf("도서제목 : %s\n", b[i].title);
						printf("도서대여회원 : %s\n", b[i].checkout);
						printf("도서아이디 : %d\n", b[i].book_id);
						printf("도서대여날짜 : %d\n", b[i].date);
					}
				}
				printf("\n검색결과가 없거나 검색을 완료하였습니다 계속 하시려면 1을, 프로그램을 종료하시려면 2를 입력해주세요\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}

		case 2:

			while (1) {
				printf("\n\n도서대여회원으로 검색합니다.. 이름을 입력해주세요\n");
				scanf("%s", bookcheckout);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(bookcheckout, b[i].checkout);
					if (res == 0) {
						printf("\n\n---------도서정보----------\n");
						printf("도서제목 : %s\n", b[i].title);
						printf("도서대여회원 : %s\n", b[i].checkout);
						printf("도서아이디 : %d\n", b[i].book_id);
						printf("도서대여날짜 : %d\n", b[i].date);

					}
				}
				printf("\n검색결과가 없거나 검색을 완료하였습니다 계속 하시려면 1을, 프로그램을 종료하시려면 2를 입력해주세요\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}

		case 3:
			while (1) {
				printf("\n\n도서아이디로 검색합니다.. 이름을 입력해주세요\n");
				scanf("%d", &bookid);
				for (i = 0; i < cnt; i++)
				{

					if (bookid == b[i].book_id) {
						printf("\n\n---------도서정보----------\n");
						printf("도서제목 : %s\n", b[i].title);
						printf("도서대여회원 : %s\n", b[i].checkout);
						printf("도서아이디 : %d\n", b[i].book_id);
						printf("도서대여날짜 : %d\n", b[i].date);


					}
					else if (bookid != b[i].book_id) break;
				}
				printf("\n검색결과가 없거나 검색을 완료하였습니다 계속 하시려면 1을, 프로그램을 종료하시려면 2를 입력해주세요\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}

		case 4:
			while (1) {
				printf("\n\n도서대여날짜로 검색합니다.. 이름을 입력해주세요\n");
				scanf("%d", &bookdate);
				for (i = 0; i < cnt; i++)
				{

					if (bookdate == b[i].date) {
						printf("\n\n---------도서정보----------\n");
						printf("도서제목 : %s\n", b[i].title);
						printf("도서대여회원 : %s\n", b[i].checkout);
						printf("도서아이디 : %d\n", b[i].book_id);
						printf("도서대여날짜 : %d\n", b[i].date);

					}
					else if (bookdate != b[i].date) break;
				}
				printf("\n검색결과가 없거나 검색을 완료하였습니다 계속 하시려면 1을, 프로그램을 종료하시려면 2를 입력해주세요\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}
		case 5: system("cls");

			main(); exit(0); break;


		case 6:exit(0); break;

		default: printf("잘못 입력하였습니다. 올바른 값을 입력하세요 >>\n"); break;


		}
	}





}
