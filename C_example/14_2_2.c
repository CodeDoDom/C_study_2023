#include <stdio.h>

void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;

	// �����Ҹ��� ����
	// : �Լ��� �Ű����� ptr�� const�� �����Ͽ� �ȿ� ����� ���� ������ �� ���Բ� �Ͽ��µ�,
	// �װ� ���� *rptr�� ����־ ���� ������. ����? ��?
}

int main(void)
{
	int num = 10;
	int* ptr = &num;

	ShowData(ptr);

	printf("%d\n", *ptr);

	return 0;
}