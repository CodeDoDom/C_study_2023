#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int maxlen, len, i;
	char* str;

	printf("글자 수 입력: ");
	scanf("%d", &maxlen);
	getchar();
	str = (char*)malloc(sizeof(char) * (maxlen + 1));

	printf("문자열 입력: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0;
	len = strlen(str);

	for (i = len; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}

	printf("%s", &str[0]);
	free(str);

	return 0;
}

//char* InputChars(int maxlen)
//{
//	int len = maxlen + 1;
//	int real_len;
//
//	char* sen = (char*)malloc(sizeof(char) * len);
//	printf("%d글자 이하 문장 입력: ", len);
//	fgets(sen, len, stdin);
//	
//	sen[strlen(sen) - 1] = 0;
//	real_len = strlen(sen);
//
//	if (len < strlen(sen))
//		return NULL;
//
//	else
//		return sen;
//}
//
//int main(void)
//{
//	int maxlen;
//	char* sen;
//
//	printf("숫자 입력: ");
//	scanf("%d", &maxlen);
//	getchar();
//
//	sen = InputChars(maxlen);
//	if (sen != NULL)
//	{
//		printf("입력 문장: %s\n", sen);
//		printf("출력 문장: %s\n", sen);
//	}
//	else
//		printf("문자열이 %d 글자를 초과하였습니다.\n", maxlen);
//	free(sen);
//
//	return 0;
//}