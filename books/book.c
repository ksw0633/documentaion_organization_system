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
		printf("\n\n--------------�����˻��޴�-------------");
		printf("\n\n������������ �˻��մϴ� -> 1 �Է�\n");
		printf("���� �뿩 ȸ������ �˻��մϴ� -> 2 �Է�\n");
		printf("���� ���̵�� �˻��մϴ� -> 3 �Է�\n");
		printf("���� �뿩 ��¥�� �˻��մϴ� -> 4 �Է�\n");
		printf("ó���޴��� -> 5 �Է�\n");
		printf("���α׷��� �����մϴ� -> 6�Է�\n");
		printf("1 2 3 4 5 6�� �ϳ��� �Է����ּ��� >>");
		scanf("%d", &selectbookmenu);
		getchar();
		switch (selectbookmenu)
		{
		case 1:
			while (1) {
				printf("\n\n������������ �˻��մϴ�.. �̸��� �Է����ּ���\n");
				scanf("%s", booktitle);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(booktitle, b[i].title);
					if (res == 0) {
						printf("\n\n---------��������----------\n");
						printf("�������� : %s\n", b[i].title);
						printf("�����뿩ȸ�� : %s\n", b[i].checkout);
						printf("�������̵� : %d\n", b[i].book_id);
						printf("�����뿩��¥ : %d\n", b[i].date);
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
				printf("\n\n�����뿩ȸ������ �˻��մϴ�.. �̸��� �Է����ּ���\n");
				scanf("%s", bookcheckout);
				for (i = 0; i < cnt; i++)
				{
					res = strcmp(bookcheckout, b[i].checkout);
					if (res == 0) {
						printf("\n\n---------��������----------\n");
						printf("�������� : %s\n", b[i].title);
						printf("�����뿩ȸ�� : %s\n", b[i].checkout);
						printf("�������̵� : %d\n", b[i].book_id);
						printf("�����뿩��¥ : %d\n", b[i].date);

					}
				}
				printf("\n�˻������ ���ų� �˻��� �Ϸ��Ͽ����ϴ� ��� �Ͻ÷��� 1��, ���α׷��� �����Ͻ÷��� 2�� �Է����ּ���\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}

		case 3:
			while (1) {
				printf("\n\n�������̵�� �˻��մϴ�.. �̸��� �Է����ּ���\n");
				scanf("%d", &bookid);
				for (i = 0; i < cnt; i++)
				{

					if (bookid == b[i].book_id) {
						printf("\n\n---------��������----------\n");
						printf("�������� : %s\n", b[i].title);
						printf("�����뿩ȸ�� : %s\n", b[i].checkout);
						printf("�������̵� : %d\n", b[i].book_id);
						printf("�����뿩��¥ : %d\n", b[i].date);


					}
					else if (bookid != b[i].book_id) break;
				}
				printf("\n�˻������ ���ų� �˻��� �Ϸ��Ͽ����ϴ� ��� �Ͻ÷��� 1��, ���α׷��� �����Ͻ÷��� 2�� �Է����ּ���\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}

		case 4:
			while (1) {
				printf("\n\n�����뿩��¥�� �˻��մϴ�.. �̸��� �Է����ּ���\n");
				scanf("%d", &bookdate);
				for (i = 0; i < cnt; i++)
				{

					if (bookdate == b[i].date) {
						printf("\n\n---------��������----------\n");
						printf("�������� : %s\n", b[i].title);
						printf("�����뿩ȸ�� : %s\n", b[i].checkout);
						printf("�������̵� : %d\n", b[i].book_id);
						printf("�����뿩��¥ : %d\n", b[i].date);

					}
					else if (bookdate != b[i].date) break;
				}
				printf("\n�˻������ ���ų� �˻��� �Ϸ��Ͽ����ϴ� ��� �Ͻ÷��� 1��, ���α׷��� �����Ͻ÷��� 2�� �Է����ּ���\n");
				scanf("%d", &end);
				if (end == 1)
					continue;
				else if (end == 2)
					exit(0);
			}
		case 5: system("cls");

			main(); exit(0); break;


		case 6:exit(0); break;

		default: printf("�߸� �Է��Ͽ����ϴ�. �ùٸ� ���� �Է��ϼ��� >>\n"); break;


		}
	}





}
