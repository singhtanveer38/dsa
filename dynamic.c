#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int x;
	int y;
}point;

int main()
{
	point *a = (point *)malloc(sizeof(point));

	a->x = 20;
	a->y = 30;


	printf("x: %d, y: %d\n", a->x, a->y);

	free(a);
	return 0;
}
