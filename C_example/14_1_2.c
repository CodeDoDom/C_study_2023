#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Swap(int* n1, int* n2, int* n3)
{
	int temp = *n3;
	*n3 = *n2;
	*n2 = *n1;
	*n1 = temp;
}

int main(void)
{
	int num1, num2, num3;

	printf("숫자 3개 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	Swap(&num1, &num2, &num3);

	printf("Swap 함수 실행 후: %d %d %d\n", num1, num2, num3);

	return 0;
}