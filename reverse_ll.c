#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *init(int data)
{
	node *n = (node *)malloc(sizeof(node));
	n->data = data;
	n->next = NULL;

	return n;
}

node *insert(node *head, int data)
{
	node *n = init(data);
	node *current = head;
	while(current->next != NULL)
	{
		current = current->next;
	}
	current->next = n;

	return head;
}

void display(node *head)
{
	node *current = head;
	while(current->next != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("%d ", current->data);
	printf("\n");
}

node *reverse(node *head)
{
	node *prev = NULL;
	node *current = head;
	node *next;

	while(current != NULL)
	{
		next = current->next;
		current->next = prev;

		prev = current;
		current = next;
	}
	return prev;
}

int main()
{
	node *n = init(26);

	n = insert(n, 33);
	n = insert(n, 99);
	n = insert(n, 103);

	display(n);

	node *rev = reverse(n);  
	display(rev);

	return 0;
}
