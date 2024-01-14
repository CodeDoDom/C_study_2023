#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[50];
	int len = 0, max_ascii = 0, max_num = 0;

	printf("영단어 입력: ");
	scanf("%s", word);

	while (word[len] != 0)
		len++;

	for (int i = 0; i < len; i++)
		printf("%c는 %d\n", word[i], word[i]);

	for (int i = 0; i < len; i++)
		if (max_ascii < word[i])
		{
			max_ascii = word[i];
			max_num = i;
		}

	printf("가장 큰 아스키 코드를 가진 문자는 %c(%d).\n", word[max_num], max_ascii);

	return 0;
}