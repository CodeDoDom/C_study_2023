#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("mystory.txt", "at");

	fputs("#�����ϴ� ����: ¥���, ������\n", fp);
	fputs("#���: ����\n", fp);
	fclose(fp);

	return 0;
}