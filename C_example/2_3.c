#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int new_arr[10];
	int num, front = 0, last = 9, temp = 0;

	printf("총 10개 숫자 입력\n");
	for (int i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &num);
		
		if (num % 2 != 0)	// 홀수면 배열의 앞부터
		{
			arr[front] = num;
			front++;
		}

		else	// 짝수면 배열의 뒤부터
		{
			arr[last] = num;
			last--;
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}