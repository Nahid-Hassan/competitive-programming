#include <bits/stdc++.h>
using namespace std;

#define mx 5

typedef struct {
	int data[mx];
	int head, tail;
} Queue;

void enqueue(Queue *q, int item) {
	if((q->tail + 1) % (mx + 1) ==  q->head) {
		printf("Queue is full!\n");;
	}
	q->data[q->tail] = item;
	q->tail = (q->tail + 1) % (mx + 1);
}

int dequeue(Queue *q) {
	int item;

	if(q->tail == q->head) {
		printf("Queue is empty!\n");

		return -1;
	}
	item = q->data[q->head];
	q->head = (q->head + 1) % (mx + 1);

	return item;
}

int main() {
	Queue mq;
	int item;

	mq.head = 0;
	mq.tail = 0;

	enqueue(&mq, 1);
	printf("Tail = %d\n",mq.tail);
	enqueue(&mq, 2);
	printf("Tail = %d\n",mq.tail);
	enqueue(&mq, 3);
	printf("Tail = %d\n",mq.tail);
	enqueue(&mq, 4);
	printf("Tail = %d\n",mq.tail);
	enqueue(&mq, 5);
	printf("Tail = %d\n",mq.tail);
	enqueue(&mq, 6);
	printf("Tail = %d\n",mq.tail);

	printf("Beginning head = %d\n",mq.head);
	item = dequeue(&mq);
	printf("Item = %d, head = %d\n",item,mq.head);
	item = dequeue(&mq);
	printf("Item = %d, head = %d\n",item,mq.head);
	item = dequeue(&mq);
	printf("Item = %d, head = %d\n",item,mq.head);
	item = dequeue(&mq);
	printf("Item = %d, head = %d\n",item,mq.head);
	item = dequeue(&mq);
	printf("Item = %d, head = %d\n",item,mq.head);
	item = dequeue(&mq);
	printf("Item = %d, head = %d\n",item,mq.head);
	item = dequeue(&mq);
	printf("Item = %d, head = %d\n",item,mq.head);
	return 0;
}

