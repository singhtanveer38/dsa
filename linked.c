#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node * create_node(int data)
{
	node *n = (node *)malloc(sizeof(node));
	n->data = data;
	n->next = NULL;

	return n;
}

void get_ll(node *head)
{
	node *current = head;
	while(current->next != NULL)
	{
		printf("%d " ,current->data);
		current = current->next;
	}
	printf("%d \n" ,current->data);
}

node * insert_end(node *head, int data)
{
	node *current = head;
	node *new = create_node(data);
	while(current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;

	return head;
}

node * insert_beg(node *head, int data)
{
	node *new = create_node(data);
	new->next = head;

	return new;
}

node * insert_pos(node *head, int data, int pos)
{
	node *new = create_node(data);
	node *current = head;
	node *prev;
	int current_pos = 0;

	while(current_pos != pos + 1)
	{
		prev = current;
		current = current->next;
		current_pos++;
	}
	prev->next = new;
	new->next = current;

	return head;
}

node *delete_beg(node *head)
{
	return head->next;
}

node *delete_end(node *head)
{
	node *current = head;
	node *prev;
	while(current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;

	return head;
}

node *delete_pos(node *head, int pos)
{
	node *current = head;
	node *prev;
	int current_pos = 0;

	while(current_pos != pos + 1)
	{
		prev = current;
		current = current->next;
		current_pos++;
	}
	prev->next = current->next;

	return head;
}

int main()
{
	node *head = create_node(23);
	head = insert_end(head, 54);
	head = insert_end(head, 4);
	head = insert_end(head, 1);
	head = insert_end(head, 78);
	head = insert_beg(head, 65);

	head = insert_pos(head, 99, 1);

	head = delete_beg(head);
	
	head = delete_end(head);

	head = delete_pos(head, 1);

	get_ll(head);
	return 0;
}
