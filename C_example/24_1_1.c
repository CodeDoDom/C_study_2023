#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("mystory.txt", "wt");

	fputs("#이름: 윤성우\n", fp);
	fputs("#주민번호: 900208-1012589\n", fp);
	fputs("#전화번호: 010-1234-5678\n", fp);
	fclose(fp);

	return 0;
}