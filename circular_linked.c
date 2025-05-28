#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}
node;


node *createNode(int data)
{
	node *n = (node *)malloc(sizeof(node));
	n->data =data;
	n->next = NULL;

	return n;
}

node *createLL(int data)
{
	node *n = createNode(data);
	n->next = n;

	return n;
}

node *insertEnd(node *head, int data)
{
	node *n = createNode(data);
	node *current = head;

	while(current->next != head)
	{
		current = current->next;
	}
	current->next = n;
	n->next = head;

	return head;
}

node *insertBeg(node *head, int data)
{
	node *n = createNode(data);
	node *current = head;

	while(current->next != head)
	{
		current = current->next;
	}

	current->next = n;
	n->next = head;

	return n;
}

node *deleteEnd(node *head)
{
	return head;
}

void displayLL(node *head)
{
	node *current = head;
	while(current->next != head)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("%d \n", current->data);
}

int main()
{
	node *head = createLL(23);
	head = insertEnd(head, 45);
	head = insertEnd(head, 99);
	head = insertBeg(head, 199);
	head = insertBeg(head, 9);
	head = insertEnd(head, 456);

	displayLL(head);

	return 0;
}
