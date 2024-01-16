#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowAllData(const int* arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);

	// 함수의 매개변수 선언에서 매개변수 arr을 대상으로 const 선언을 한 이유는?
	// : 함수에서 포인터 변수 arr 안에 저장된 배열요소의 값을 수정하지 못하도록...?

}

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int arrlen = sizeof(arr) / sizeof(int);

	ShowAllData(ptr, arrlen);

	return 0;
}