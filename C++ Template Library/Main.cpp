//Implement a comprehensive C++ Template Library for data structures
#include <iostream>
#include "Stack.h"
#include "Queue.h"

//Include the custom libraries here

using namespace std;

//Driver code
int main()
{
	//Perform operations on stack
	Stack st;
	st.push(10);
	st.push(20);
	st.display();
	st.pop();
	st.display();
	st.pop();
	st.pop();
	st.display();

	//Perform operations on queue
	Queue que;
	que.enqueue(10);
	que.enqueue(20);
	que.enqueue(30);
	que.enqueue(40);
	que.display();
	que.dequeue();
	que.dequeue();
	que.display();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.display();

	return 1;
}