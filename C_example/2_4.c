#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LEN 50

void CheckPalindrome(char str[])
{
	int len = strlen(str);
	int no = 0;

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			no++;
			break;
		}
	}

	if (no == 0)
		printf("%s는 회문입니다.\n", str);
	else
		printf("%s는 회문이 아닙니다.\n", str);
}

int main(void)
{
	char str[LEN];

	printf("문자열 입력: ");
	scanf("%s", str);

	CheckPalindrome(str);

	return 0;
}