//Stack.h
#ifndef STACK_H
#define STACK_H

//Define the class Stack
class Stack {
public:
	Stack();
	int push(int value);
	void display();
	int pop();
	~Stack();

private:
	int* stack;
	int max_size;
	int top;
	int increase_stack_size();
};

#endif

