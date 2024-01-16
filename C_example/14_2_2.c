#include <stdio.h>

void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;

	// 지적할만한 사항
	// : 함수의 매개변수 ptr을 const로 선언하여 안에 저장된 값을 수정할 수 없게끔 하였는데,
	// 그걸 굳이 *rptr에 집어넣어서 값을 수정함. 굳이? 왜?
}

int main(void)
{
	int num = 10;
	int* ptr = &num;

	ShowData(ptr);

	printf("%d\n", *ptr);

	return 0;
}