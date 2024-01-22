#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MakeArr(int n);

int main(void)
{
	int n;

	printf("한 자릿수 숫자 입력 시 nxn 배열 생성: ");
	scanf("%d", &n);

	MakeArr(n);

	return 0;
}

void MakeArr(int n)
{
	int arr[10][10] = { 0 };


}