//Implement a comprehensive C++ Template Library for data structures
#include <iostream>
#include "Stack.h"

//Include the custom libraries here

using namespace std;

//Driver code
int main()
{
	Stack st;
	st.push(10);
	st.push(20);
	st.display();
	st.pop();
	st.pop();
	st.pop();
	return 1;
}