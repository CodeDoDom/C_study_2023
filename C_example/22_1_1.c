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

	printf("���� �̸�: ");
	scanf("%s", man.name);

	printf("�޿�: ");
	scanf("%d", &man.money);

	printf("���� ����\n");
	printf("�̸�: %s\n", man.name);
	printf("�޿�: %d\n", man.money);

	return 0;
}