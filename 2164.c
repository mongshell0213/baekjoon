#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void enqueue(int queue[], int *front, int *rear,int size,int data) {
	if ((*rear + 1) % size != *front) {
		*rear = (*rear + 1) % size;
		queue[*rear] = data;
	}
}

int dequeue(int queue[], int* front, int* rear,int size) {
	int num;
	if (*front != *rear) {
		*front = (*front + 1) % size;
		num = queue[*front];
	}
	return num;
}

int main(void){
	int n;
	int front=0, rear=0;
	int* queue;
	int result;

	scanf("%d", &n);
	queue = (int*)malloc(sizeof(int) * (n + 1));
	for (int data = 1; data < n + 1; data++) {
		enqueue(queue, &front, &rear, n + 1, data);
	}
	
	while (1) {
		result = dequeue(queue, &front, &rear, n + 1);
		if (front == rear)
			break;
		result = dequeue(queue, &front, &rear, n + 1);
		if (front == rear)
			break;
		enqueue(queue, &front, &rear, n + 1, result);
	}
	printf("%d\n",result);
	return 0;
}

