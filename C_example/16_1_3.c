#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int student_info[5][5];

	for (int i = 0; i < 4; i++)
	{
		printf("%d번 학생 성적 입력\n", i + 1);

		for (int j = 0; j < 4; j++)
		{
			switch (j)
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
			}
		}
	}

	return 0;
}