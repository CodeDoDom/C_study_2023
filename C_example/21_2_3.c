#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char info1[20];
	char info2[20];
	char info3[30];
	int len1, len2;

	fgets(info1, sizeof(info1), stdin);
	fgets(info2, sizeof(info2), stdin);

	puts(info1);
	puts(info2);

	len1 = strlen(info1);
	len2 = strlen(info2);

	PrintAge(info1, info2, info3, len1, len2);

	return 0;
}

void PrintAge(char info1[], char info2[], char info3[], int len1, int len2)
{
	for (int i = 0; i < len1; i++)
	{

	}
}