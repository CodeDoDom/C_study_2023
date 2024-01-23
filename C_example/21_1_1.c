#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;

	printf("알파벳 입력: ");
	ch = getchar();

	if ('A' <= ch && ch <= 'Z')
		putchar(ch + 32);

	else if ('a' <= ch && ch <= 'z')
		putchar(ch - 32);

	else
		printf("잘못된 입력입니다.\n");

	return 0;
}