#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define LEN 50

typedef struct book
{
	char writer[LEN];
	char title[LEN];
	int page;
} Book;

int main(void)
{
	Book* list[3];

	for (int i = 0; i < 3; i++)
	{
		Book* book = (Book*)malloc(sizeof(Book));

		printf("����: ");
		fgets(book->writer, LEN, stdin);

		printf("����: ");
		fgets(book->title, LEN, stdin);

		printf("������: ");
		scanf("%d", &(book->page));
		getchar();

		list[i] = book;
	}

	for (int i = 0; i < 3; i++)
		printf("[ book%d ]\n����: %s\n����: %s\n������: %d\n\n", i + 1, list[i]->writer, list[i]->title, list[i]->page);

	for (int i = 0; i < 3; i++)
		free(list[i]);

	return 0;
}

// 4_1�� ���ؼ� ���� ����...?