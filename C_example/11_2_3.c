#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[50];
	int len = 0, max_ascii = 0, max_num = 0;

	printf("���ܾ� �Է�: ");
	scanf("%s", word);

	while (word[len] != 0)
		len++;

	for (int i = 0; i < len; i++)
		printf("%c�� %d\n", word[i], word[i]);

	for (int i = 0; i < len; i++)
		if (max_ascii < word[i])
		{
			max_ascii = word[i];
			max_num = i;
		}

	printf("���� ū �ƽ�Ű �ڵ带 ���� ���ڴ� %c(%d).\n", word[max_num], max_ascii);

	return 0;
}