#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[50];
	int len = 0, temp = 0;

	printf("���ܾ� �Է�: ");
	scanf("%s", word);

	while (word[len] != '\0')
		len++;

	for (int i = 0; i < len/2; i++)	// �� len/2 �ϴ� �ɱ�
	{
		temp = word[i];
		word[i] = word[(len - i) - 1];
		word[(len - i) - 1] = temp;
	}

	printf("%s\n", word);

	return 0;
}