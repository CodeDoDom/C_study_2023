#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	
	scanf("%d", &num);

	num = ~num;
	num += 1;

	printf("���� �� ��ȣ �ٲٱ�: %d\n", num);

	return 0;
}