#include<stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void getArr(int a[], int len)
{
	for(int i=0; i<len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void delBeg(int a[], int len)
{
	for(int i=0; i<len-1; i++)
	{
		a[i] = a[i+1];
	}
}

void del(int a[], int len, int index)
{
	for(int i=index; i<len-1; i++)
	{
		a[i] = a[i+1];
	}
}

void update(int a[], int value, int index)
{
	a[index] = value;
}

void insertBeg(int a[], int value, int len)
{
	for(int i=len; i>0; i--)
	{
		a[i] = a[i-1];
	}
	a[0] = value;
}

void insertEnd(int a[], int value, int len)
{
	a[len] = value;
}


void insert(int a[], int value, int len, int index)
{
	for(int i=len; i>index; i--)
	{
		a[i] = a[i-1];
	}
	a[index] = value;
}


int main()
{
	int a[6] = {5,2,7,6};
	int len = 4;

	getArr(a, len);
	
	insert(a, 34, len, 2);
	len++;

	getArr(a, len);


	return 0;
}
