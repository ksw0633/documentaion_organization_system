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
		printf("\n\n--------------�����˻��޴�-------------");
		printf("\n\n�����̸����� �˻��մϴ� -> 1 �Է�\n");
		printf("�������̵�� �˻��մϴ� -> 2 �Է�\n");
		printf("���α׷��� �����մϴ� -> 3�Է�\n");
		printf("1 2 3�� �ϳ��� �Է����ּ��� >>");
		scanf("%d", &selectusermenu);
		fflush(stdin);

		switch (selectusermenu)
		{
		case 1:
			while (1) {
				printf("\n\n�����̸����� �˻��մϴ�.. �̸��� �Է����ּ���\n");
				scanf("%s", username);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(username, u[i].name);
					if (res == 0) {
						printf("\n\n---------ȸ������----------\n");
						printf("�̸� : %s\n", u[i].name);
						printf("���̵� : %s\n", u[i].id);
						printf("��й�ȣ : %s\n", u[i].pw);
						printf("�ֹε�Ϲ�ȣ : %d\n", u[i].id_number);
					}
				}
				printf("\n�˻������ ���ų� �˻��� �Ϸ��Ͽ����ϴ� ��� �Ͻ÷��� 1��, ���α׷��� �����Ͻ÷��� 2�� �Է����ּ���\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}

		case 2:
			while (1) {
				printf("\n\n�������̵�� �˻��մϴ�.. ���̵� �Է����ּ���\n");
				scanf("%s", userid);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(userid, u[i].id);

					if (res == 0) {
						res = 1;
						while (res != 0)
						{
							printf("��й�ȣ�� �Է����ּ���\n");
							scanf("%s", userpw);
							res = strcmp(u[i].pw, userpw);
						}
						if (res == 0) {
							printf("\n\n---------ȸ������----------\n");
							printf("�̸� : %s\n", u[i].name);
							printf("���̵� : %s\n", u[i].id);
							printf("��й�ȣ : %s\n", u[i].pw);
							printf("�ֹε�Ϲ�ȣ : %d\n", u[i].id_number);
						}
					}


				}
				printf("\n�˻������ ���ų� �˻��� �Ϸ��Ͽ����ϴ� ��� �Ͻ÷��� 1��, ���α׷��� �����Ͻ÷��� 2�� �Է����ּ���\n");
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

			printf("�߸� �Է��Ͽ����ϴ�. �ùٸ� ���� �Է��ϼ��� >>\n");
			break;

		}

		}
	}

}
