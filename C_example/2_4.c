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
		printf("%s�� ȸ���Դϴ�.\n", str);
	else
		printf("%s�� ȸ���� �ƴմϴ�.\n", str);
}

int main(void)
{
	char str[LEN];

	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	CheckPalindrome(str);

	return 0;
}