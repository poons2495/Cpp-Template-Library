#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
	int front, rear, max_size;
	int* queue;
	int increase_queue_capacity();
	int decrease_queue_capacity();
public:
	Queue();
	int enqueue(int value);
	int dequeue();
	void display();
	~Queue();
};

#endif

