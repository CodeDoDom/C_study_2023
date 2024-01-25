#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("mystory.txt", "at");

	fputs("#좋아하는 음식: 짜장면, 탕수육\n", fp);
	fputs("#취미: 게임\n", fp);
	fclose(fp);

	return 0;
}