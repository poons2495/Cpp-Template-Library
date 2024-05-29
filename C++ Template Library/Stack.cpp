#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {
	cout << "Initialization : " << endl;
	//Initialize a new dynamic array with size 1 and increase as required
	top = -1;
	stack = new int[1];
	max_size = 1;
}

int Stack::increase_stack_size() {
	//Increase the stack size by 1 when the stack is full
	int* temp;
	temp = stack;

	stack = new int[max_size + 1];

	for (int i = 0; i < max_size; i++) {
		stack[i] = temp[i];
	}

	max_size = max_size + 1;
	cout << "Stack is resized to " << max_size << endl;
	delete[] temp;

	return 1;
}

int Stack::push(int value) {
	if (top >= max_size - 1) {
		increase_stack_size();
	}

	top = top + 1;
	stack[top] = value;

	cout << stack[top] << " is pushed to the stack" << endl;

	return 1;
}

void Stack::display() {
	cout << "Displaying stack elements : ";
	for (int i = 0; i < max_size; i++) {
		cout << stack[i] << " ";
	}
	cout << endl;
}

Stack::~Stack() {
	top = max_size = -1;
	delete[] stack;
}