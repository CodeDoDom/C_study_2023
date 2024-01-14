#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[50];
	int len = 0;

	printf("영단어 입력: ");
	scanf("%s", word);

	while (word[len] != '\0')
		len++;

	printf("%s\n", word);
	printf("영단어의 길이: %d\n", len);

	return 0;
}