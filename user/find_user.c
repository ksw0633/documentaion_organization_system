#include "common.h"

void find_user(user_data *u, int cnt)
{
	char username[80];
	char userid[80];
	char userpw[80];
	int userid_number;
	int i, res, selectusermenu, end;




	while (1)
	{
		printf("\n\n--------------유저검색메뉴-------------");
		printf("\n\n유저이름으로 검색합니다 -> 1 입력\n");
		printf("유저아이디로 검색합니다 -> 2 입력\n");
		printf("프로그램을 종료합니다 -> 3입력\n");
		printf("1 2 3중 하나를 입력해주세요 >>");
		scanf("%d", &selectusermenu);
		fflush(stdin);

		switch (selectusermenu)
		{
		case 1:
			while (1) {
				printf("\n\n유저이름으로 검색합니다.. 이름을 입력해주세요\n");
				scanf("%s", username);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(username, u[i].name);
					if (res == 0) {
						printf("\n\n---------회원정보----------\n");
						printf("이름 : %s\n", u[i].name);
						printf("아이디 : %s\n", u[i].id);
						printf("비밀번호 : %s\n", u[i].pw);
						printf("주민등록번호 : %d\n", u[i].id_number);
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
				printf("\n\n유저아이디로 검색합니다.. 아이디를 입력해주세요\n");
				scanf("%s", userid);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(userid, u[i].id);

					if (res == 0) {
						res = 1;
						while (res != 0)
						{
							printf("비밀번호를 입력해주세요\n");
							scanf("%s", userpw);
							res = strcmp(u[i].pw, userpw);
						}
						if (res == 0) {
							printf("\n\n---------회원정보----------\n");
							printf("이름 : %s\n", u[i].name);
							printf("아이디 : %s\n", u[i].id);
							printf("비밀번호 : %s\n", u[i].pw);
							printf("주민등록번호 : %d\n", u[i].id_number);
						}
					}


				}
				printf("\n검색결과가 없거나 검색을 완료하였습니다 계속 하시려면 1을, 프로그램을 종료하시려면 2를 입력해주세요\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}
			break;


		case 3: exit(0);

		default:
		{

			printf("잘못 입력하였습니다. 올바른 값을 입력하세요 >>\n");
			break;

		}

		}
	}

}
