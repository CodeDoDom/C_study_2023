#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LEN 50

typedef struct book
{
	char writer[LEN];
	char title[LEN];
	int page;
} Book;

int main(void)
{
	Book book[3];

	for (int i = 0; i < 3; i++)
	{
		printf("����: ");
		fgets(book[i].writer, LEN, stdin);
		
		printf("����: ");
		fgets(book[i].title, LEN, stdin);
		
		printf("������: ");
		scanf("%d", &book[i].page);
		getchar();
	}

	for (int i = 0; i < 3; i++)
		printf("[ book%d ]\n����: %s\n����: %s\n������: %d\n\n", i + 1, book[i].writer, book[i].title, book[i].page);

	return 0;
}