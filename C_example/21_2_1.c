#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MySolution(char str[], int len);

int main(void)
{
	char str[50];
	int len;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	len = sizeof(str);

	printf("1. ���ڿ� �� ������ ��: %d\n", MySolution(str, len));

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