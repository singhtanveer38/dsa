#include<stdio.h>

void mult(int num, int multiplier)
{
	for(int i=0; i<=num; i++)
	{
		printf("%d x %d = %d\n", i, multiplier, (i*multiplier));
	}
}

void mult_while(int num, int mul)
{
	int i=0;
	while(i<=num)
	{
		printf("%d x %d = %d\n", i, mul, (i*mul));
		i++;
	}
}

int even(int num)
{
	if(num%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	int num = 11;
	
	printf("%d\n", even(num));

}
