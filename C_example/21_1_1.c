#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;

	printf("���ĺ� �Է�: ");
	ch = getchar();

	if ('A' <= ch && ch <= 'Z')
		putchar(ch + 32);

	else if ('a' <= ch && ch <= 'z')
		putchar(ch - 32);

	else
		printf("�߸��� �Է��Դϴ�.\n");

	return 0;
}