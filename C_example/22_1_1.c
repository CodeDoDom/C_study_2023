#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee
{
	char name[10];
	int money;
};

int main(void)
{
	struct employee man;

	printf("직원 이름: ");
	scanf("%s", man.name);

	printf("급여: ");
	scanf("%d", &man.money);

	printf("직원 정보\n");
	printf("이름: %s\n", man.name);
	printf("급여: %d\n", man.money);

	return 0;
}