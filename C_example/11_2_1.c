#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[50];
	int len = 0;

	printf("���ܾ� �Է�: ");
	scanf("%s", word);

	while (word[len] != '\0')
		len++;

	printf("%s\n", word);
	printf("���ܾ��� ����: %d\n", len);

	return 0;
}