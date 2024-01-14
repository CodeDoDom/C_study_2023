#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1[] = { "Good Time" };
	char str2[] = { 'G', 'o', 'o', 'd', ' ', 'T', 'i', 'm', 'e' };

	int str2len;

	printf("%s\n", str1);

	str2len = sizeof(str2) / sizeof(char);

	for (int i = 0; i < str2len; i++)
	{
		printf("%c", str2[i]);
	}

	return 0;
}