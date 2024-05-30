#include <iostream>
#include "Queue.h"

using namespace std;

//Methods for implementing Queue datastructure

Queue::Queue() {
	front = rear = 0;
	max_size = 1;
	queue = new int[max_size];
}

//Increase the queue capacity by 1
int Queue::increase_queue_capacity() {
	int* temp;
	temp = queue;
	queue = new int[max_size + 1];

	for (int i = 0; i < max_size; i++) {
		queue[i] = temp[i];
	}
	max_size = max_size + 1;

	delete temp;
	return 1;
}

//Method to insert front of the queue
int Queue::enqueue(int value) {
	if (max_size == rear) {
		increase_queue_capacity();
	}
	//Insert the value into the queue
	queue[rear] = value;
	cout << "Enqueued " << queue[rear] << " from the queue" << endl;
	rear++;
	return 1;
}

//Method to remove from the queue
int Queue::dequeue() {
	if (front == rear) {
		cout << "Queue is empty!" << endl;
		return 0;
	}
	cout << "Dequeued " << queue[front] << " from the queue" << endl;
	//Decrement rear by 1 and shift all the elements to the left by 1
	for (int i = 0; i < (rear - 1); i++) {
		queue[i] = queue[i + 1];
	}
	rear--;
	return 1;
}

//Display the queue elements
void Queue::display() {
	cout << "Displaying queue elements: ";
	for(int i = front; i < rear; i++) {
		cout << queue[i] << " ";
	}
	cout << endl;
}

Queue::~Queue() {
	front = rear = 0;
	delete[] queue;
}