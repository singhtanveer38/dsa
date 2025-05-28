#include<stdio.h>
#define MAX_SIZE 10

typedef struct stack
{
	int top;
	int data[MAX_SIZE];
}stack;

stack init(stack s)
{
	s.top = -1;

	return s;
}

stack push(stack s, int data)
{
	if(s.top+1 < MAX_SIZE)
	{
		s.top++;
		s.data[s.top] = data;
	}
	else
	{
		printf("Stack Overflow");
	}
	return s;
}

stack pop(stack s)
{
	if(s.top == -1)
	{
		printf("Stack Underflow");
	}
	else
	{
		s.top--;
	}

	return s;
}

int peek(stack s)
{
	return s.data[s.top];
}

int main()
{
	stack s = init(s);
	
	s = push(s, 20);
	s = push(s, 32);
	s = push(s, 48);
	s = push(s, 25);

	s = pop(s);
	printf("%d\n", peek(s));

	return 0;
}
