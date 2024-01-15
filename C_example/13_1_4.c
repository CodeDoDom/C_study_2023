#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[9] = { 10,20,30,40,50,60,70,80,90 };
	int arrlen = sizeof(arr) / sizeof(int);
	int* f_ptr = &arr[0];			// 배열의 first
	int* l_ptr = &arr[arrlen - 1];	// 배열의 last
	int temp = 0;

	for (int j = 0; j < arrlen/2; j++)
	{
		temp = *f_ptr;
		*f_ptr = *l_ptr;
		*l_ptr = temp;

		f_ptr++;
		l_ptr--;

		//f_ptr += 1;
		//l_ptr -= 1;
	}

	for (int i = 0; i < arrlen; i++)
		printf("%d ", arr[i]);

	//printf("1. f_ptr: %d\n", *f_ptr);
	//*f_ptr += 1;	// arr[0] 값에 1 더함
	//f_ptr += 1;		// arr[0]에서 arr[1] 됨
	//f_ptr++;		// arr[0]에서 arr[1] 됨
	//printf("2. f_ptr: %d\n", *f_ptr);

	return 0;
}