#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int student_info[5][5] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		printf("%d번 학생 성적 입력\n", i + 1);

		for (int j = 0; j < 4; j++)
		{
			switch (j + 1)
			{
			case 1:
				printf("국어: ");
				scanf("%d", &student_info[i][j]);
				break;

			case 2:
				printf("영어: ");
				scanf("%d", &student_info[i][j]);
				break;

			case 3:
				printf("수학: ");
				scanf("%d", &student_info[i][j]);
				break;

			case 4:
				printf("국사: ");
				scanf("%d", &student_info[i][j]);
				break;

			default:
				break;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			student_info[i][4] += student_info[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			student_info[4][i] += student_info[i][j];
		}
		student_info[4][4] += student_info[4][i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%5d ", student_info[i][j]);

		printf("\n");
	}


	return 0;
}