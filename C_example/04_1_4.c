#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	
	scanf("%d", &num);

	num = ~num;
	num += 1;

	printf("정수 값 부호 바꾸기: %d\n", num);

	return 0;
}