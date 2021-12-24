#include <iostream>
#include <stack>
using namespace std;
// Stack -
// It follows LIFO order

int main()
{
	// Implementation
	stack<string> s;

	// Adding/Pushing elements
	s.push("cat");
	s.push("dog");
	s.push("squirrel");
	s.push("elephant");
	s.push("dolphin");

	// Topmost element
	cout << "Top element -> " << s.top() << endl;

	// Poping an element
	s.pop();
	cout << "After poping, top element -> " << s.top() << endl;

	// Size of stack
	cout << "Size of stack -> " << s.size() << endl;

	// Empty or not
	cout << "Empty or not -> " << s.empty() << endl;
}