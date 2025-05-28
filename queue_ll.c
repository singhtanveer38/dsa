#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int data;
	struct queue *front; 
	struct queue *rear; 
}queue;

queue *init()
{
	queue *q = (queue *)malloc(sizeof(queue));
	q->front = NULL;
	q->rear = front;

	return q;
}

queue *enqueue(queue *rear, int data)
{
	queue *n = 
}

int main()
{
	return 0;
}
