#include <stdio.h>

int main(void)
{
	char str[100];

	FILE* fp = fopen("mystory.txt", "rt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!\n");
		return -1;
	}

	while (fgets(str, sizeof(str), fp) != NULL)
		printf(str);

	fclose(fp);

	return 0;
}