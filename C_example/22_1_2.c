#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee
{
	char name[10];
	char id[10];
	int money;
};

int main(void)
{
	struct employee man[3];

	for (int i = 0; i < 3; i++)
	{
		printf("직원 이름: ");
		scanf("%s", man[i].name);

		printf("id: ");
		scanf("%s", man[i].id);

		printf("급여: ");
		scanf("%d", &man[i].money);
	}

	printf("직원 정보\n");

	for (int i = 0; i < 3; i++)
	{
		printf("이름: %s\n", man[i].name);
		printf("ID: %s\n", man[i].id);
		printf("급여: %d\n", man[i].money);
	}

	return 0;
}