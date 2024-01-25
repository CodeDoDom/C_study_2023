#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* pos1, Point* pos2);

int main(void)
{
	Point pos1 = { 1, 2 };
	Point pos2 = { 3, 4 };

	SwapPoint(&pos1, &pos2);

	printf("%d %d\n", pos1.xpos, pos1.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);

	return 0;
}

void SwapPoint(Point* pos1, Point* pos2)
{
	Point temp;

	temp = *pos1;
	*pos1 = *pos2;
	*pos2 = temp;
}