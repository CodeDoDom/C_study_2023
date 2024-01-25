#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rect
{
	Point ul;	// 좌 상단
	Point lr;	// 우 하단
} Rect;

void PrintPos(Rect r);

void MakeArea(Rect r);

int main(void)
{
	Rect r1 = { {10,10},{12,12} };
	Rect r2 = { {1,1},{7,5} };

	printf("[ 직사각형 정보 ]\n");
	PrintPos(r1);
	printf("\n");
	MakeArea(r1);
	printf("\n");

	printf("[ 직사각형 정보 ]\n");
	PrintPos(r2);
	printf("\n");
	MakeArea(r2);

	return 0;
}

void PrintPos(Rect r)
{
	printf("좌 상단: %d, %d\n", r.ul.xpos, r.ul.ypos);
	printf("좌 하단: %d, %d\n", r.ul.xpos, r.lr.ypos);
	printf("우 상단: %d, %d\n", r.lr.xpos, r.ul.ypos);
	printf("우 하단: %d, %d\n", r.lr.xpos, r.lr.ypos);
}

void MakeArea(Rect r)
{
	printf("직사각형의 넓이: %d x %d = %d\n", 
		r.lr.xpos - r.ul.xpos, r.lr.ypos - r.ul.ypos, (r.lr.xpos - r.ul.xpos) * (r.lr.ypos - r.ul.ypos));
}