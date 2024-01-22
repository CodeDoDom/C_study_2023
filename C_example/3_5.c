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
		printf("가위는 1, 바위는 2, 보는 3: ");
		scanf("%d", &man);
		cnt++;
		
		pc = (rand() % 3) + 1;

		switch (man)
		{
		case 1:
			printf("당신은 가위 선택, ");
			if (pc == 1)
			{
				printf("컴퓨터는 가위 선택, 무승부!\n\n");
				tie++;
			}
			else if (pc == 2)
			{
				printf("컴퓨터는 바위 선택, 컴퓨터 승!\n\n");
				lose++;
			}
			else if (pc == 3)
			{
				printf("컴퓨터는 보 선택, 플레이어 승!\n\n");
				win++;
			}
			break;

		case 2:
			printf("당신은 바위 선택, ");
			if (pc == 1)
			{
				printf("컴퓨터는 가위 선택, 플레이어 승!\n\n");
				win++;
			}
			else if (pc == 2)
			{
				printf("컴퓨터는 바위 선택, 무승부!\n\n");
				tie++;
			}
			else if (pc == 3)
			{
				printf("컴퓨터는 보 선택, 컴퓨터 승!\n\n");
				lose++;
			}
			break;

		case 3:
			printf("당신은 보 선택, ");
			if (pc == 1)
			{
				printf("컴퓨터는 가위 선택, 컴퓨터 승!\n\n");
				lose++;
			}
			else if (pc == 2)
			{
				printf("컴퓨터는 바위 선택, 플레이어 승!\n\n");
				win++;
			}
			else if (pc == 3)
			{
				printf("컴퓨터는 보 선택, 무승부!\n\n");
				tie++;
			}
			break;

		default:
			printf("잘못된 숫자를 입력하셨습니다.\n\n");
			cnt--;
			break;
		}
	}

	printf("[게임 결과]\n");
	printf("%d전 %d무 %d승 하셨습니다!\n", cnt, tie, win);

	return 0;
}