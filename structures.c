#include<stdio.h>

struct person{
	char *name;
	int age;
	int height;
};

typedef struct{
	int x;
	int y;
}point;

point setPoint(int x, int y)
{
	point a;
	a.x = x;
	a.y = y;

	return a;
}

int main()
{
	point a;
	point *ptr = &a;

	a = setPoint(3,7);

	printf("%d, %d\n", ptr->x, ptr->y);


	return 0;
}
