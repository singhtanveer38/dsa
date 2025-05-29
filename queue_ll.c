#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

typedef struct queue
{
	node *front; 
	node *rear; 
}queue;

queue *init()
{
	queue *q = (queue *)malloc(sizeof(queue));
	q->front = NULL;
	q->rear = q->front;

	return q;
}

queue *enqueue(queue *q, int data)
{
	node *n = (node *)malloc(sizeof(node));

	n->data = data;
	n->next = NULL;

	if(q->front == NULL & q->rear == NULL)
	{
		q->front = n;
		q->rear = n;
	}
	
	else
	{
		q->rear->next = n;
		q->rear = n;
	}

	return q;

}

queue *dequeue(queue *q)
{
	if(q->front->next == NULL)
		printf("Underflow\n");
	else
		q->front = q->front->next;
	return q;
}

int peek(queue *q)
{
	return q->front->data;
}

int main()
{
	queue *q = init();
	q = enqueue(q, 23);
	q = enqueue(q, 2);
	q = enqueue(q, 3);
	q = enqueue(q, 87);

	q = dequeue(q);
	q = enqueue(q, 56);

	q = dequeue(q);
	q = dequeue(q);
	q = dequeue(q);
	q = dequeue(q);
	q = dequeue(q);
	q = dequeue(q);
	printf("%d\n", peek(q));
	return 0;
}
