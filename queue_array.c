#include<stdio.h>
#define MAX_SIZE 10

typedef struct
{
	int front;
	int rear;
	int data[MAX_SIZE];
}queue;

queue init(queue q)
{
	q.front = 0;
	q.rear = 0;
}

queue enqueue(queue q, int data)
{
	if(q.rear == MAX_SIZE)
	{
		printf("queue full\n");
	}
	else
	{
		q.data[q.rear] = data;
		q.rear++;
	}

	return q;
}

queue dequeue(queue q)
{
	if(q.front == q.rear)
	{
		printf("queue empty\n");
		q = init(q);
	}
	else
	{
		q.front++;
	}
	return q;
}

int peek(queue q)
{
	return q.data[q.front];
}

int main()
{
	queue q = init(q);
//	q = enqueue(q, 23);
//	q = enqueue(q, 3);
//	q = enqueue(q, 2);
//	q = enqueue(q, 99);
//	q = enqueue(q, 99);
//	q = enqueue(q, 99);
//	q = enqueue(q, 99);
//	q = enqueue(q, 99);
//	q = enqueue(q, 99);
//	q = enqueue(q, 99);
//	q = enqueue(q, 99);
//
	q = dequeue(q);

	printf("%d\n", peek(q));
	return 0;
}
