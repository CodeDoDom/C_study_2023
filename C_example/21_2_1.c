#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MySolution(char str[], int len);
int BookSolution(char str[], int len);
int MakeNum(char c);

int main(void)
{
	char str[50];
	int len;

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);

	len = sizeof(str);

	printf("1. ���ڿ� �� ������ ��: %d\n", MySolution(str, len));
	printf("2. ���ڿ� �� ������ ��: %d\n", BookSolution(str, len));

	return 0;
}

int MySolution(char str[], int len)
{
	int tot = 0;
	char temp[1];

	for (int i = 0; i < len; i++)
	{
		if (48 <= str[i] && str[i] <= 57)
		{
			temp[0] = str[i];
			tot += atoi(temp);
		}
	}

	return tot;
}

int BookSolution(char str[], int len)
{
	int tot = 0;
	
	for (int i = 0; i < len; i++)
	{
		if ('1' <= str[i] && str[i] <= '9')
			tot += MakeNum(str[i]);
	}

	return tot;
}

int MakeNum(char c)
{
	static int diff = 1 - '1';

	return c + diff;
}