#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int student_info[5][5];

	for (int i = 0; i < 4; i++)
	{
		printf("%d�� �л� ���� �Է�\n", i + 1);

		for (int j = 0; j < 4; j++)
		{
			switch (j)
			{
			case 1:
				printf("����: ");
				scanf("%d", &student_info[i][j]);
				break;

			case 2:
				printf("����: ");
				scanf("%d", &student_info[i][j]);
				break;

			case 3:
				printf("����: ");
				scanf("%d", &student_info[i][j]);
				break;

			case 4:
			}
		}
	}

	return 0;
}