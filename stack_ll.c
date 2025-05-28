#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
	int data;
	struct stack *next;
}stack;

stack *init()
{
	stack *n = (stack *)malloc(sizeof(stack));

	n->next = NULL;

	return n;
}

stack *push(stack *top, int data)
{
	stack *n = (stack *)malloc(sizeof(stack));

	n->data = data;
	n->next = top;

	return n;
}

stack *pop(stack *top)
{
	if(top->next == NULL)
	{
		printf("stack underflow\n");
	}
	else
	{
		top = top->next;
	}

	return top;
}

int peek(stack *top)
{
	return top->data;
}

int main()
{
	stack *s = init();

	s = push(s, 26);
	s = push(s, 6);
	s = push(s, 2);
	s = pop(s);
	s = pop(s);
	s = pop(s);
	s = pop(s);
	printf("%d\n", peek(s));
	return 0;
}
