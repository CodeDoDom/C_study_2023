#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));

	int man = 0, pc = 0;
	int win = 0, lose = 0, tie = 0;
	int cnt = 0;

	while (lose == 0)
	{
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &man);
		cnt++;
		
		pc = (rand() % 3) + 1;

		switch (man)
		{
		case 1:
			printf("����� ���� ����, ");
			if (pc == 1)
			{
				printf("��ǻ�ʹ� ���� ����, ���º�!\n\n");
				tie++;
			}
			else if (pc == 2)
			{
				printf("��ǻ�ʹ� ���� ����, ��ǻ�� ��!\n\n");
				lose++;
			}
			else if (pc == 3)
			{
				printf("��ǻ�ʹ� �� ����, �÷��̾� ��!\n\n");
				win++;
			}
			break;

		case 2:
			printf("����� ���� ����, ");
			if (pc == 1)
			{
				printf("��ǻ�ʹ� ���� ����, �÷��̾� ��!\n\n");
				win++;
			}
			else if (pc == 2)
			{
				printf("��ǻ�ʹ� ���� ����, ���º�!\n\n");
				tie++;
			}
			else if (pc == 3)
			{
				printf("��ǻ�ʹ� �� ����, ��ǻ�� ��!\n\n");
				lose++;
			}
			break;

		case 3:
			printf("����� �� ����, ");
			if (pc == 1)
			{
				printf("��ǻ�ʹ� ���� ����, ��ǻ�� ��!\n\n");
				lose++;
			}
			else if (pc == 2)
			{
				printf("��ǻ�ʹ� ���� ����, �÷��̾� ��!\n\n");
				win++;
			}
			else if (pc == 3)
			{
				printf("��ǻ�ʹ� �� ����, ���º�!\n\n");
				tie++;
			}
			break;

		default:
			printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.\n\n");
			cnt--;
			break;
		}
	}

	printf("[���� ���]\n");
	printf("%d�� %d�� %d�� �ϼ̽��ϴ�!\n", cnt, tie, win);

	return 0;
}