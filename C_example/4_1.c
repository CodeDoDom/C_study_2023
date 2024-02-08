#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct book
{
	char writer[50];
	char title[50];
	int page;
} Book;

int main(void)
{
	Book book1, book2, book3;

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			printf("历磊: ");
			fgets(book1.writer, sizeof(book1.writer), stdin);
			printf("力格: ");
			fgets(book1.title, sizeof(book1.title), stdin);
			printf("其捞瘤: ");
			scanf("%d", &book1.page);
			getchar();
		}

		else if (i == 1)
		{
			printf("历磊: ");
			fgets(book2.writer, sizeof(book2.writer), stdin);
			printf("力格: ");
			fgets(book2.title, sizeof(book2.title), stdin);
			printf("其捞瘤: ");
			scanf("%d", &book2.page);
			getchar();
		}

		else
		{
			printf("历磊: ");
			fgets(book3.writer, sizeof(book3.writer), stdin);
			printf("力格: ");
			fgets(book3.title, sizeof(book3.title), stdin);
			printf("其捞瘤: ");
			scanf("%d", &book3.page);
			getchar();
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
			printf("book1\n历磊: %s\n力格: %s\n其捞瘤: %d\n\n", book1.writer, book1.title, book1.page);

		else if (i == 1)
			printf("book2\n历磊: %s\n力格: %s\n其捞瘤: %d\n\n", book2.writer, book2.title, book2.page);

		else
			printf("book3\n历磊: %s\n力格: %s\n其捞瘤: %d\n\n", book3.writer, book3.title, book3.page);
	}

	return 0;
}