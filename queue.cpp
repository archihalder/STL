#include <iostream>
#include <queue>
using namespace std;

// Queue -
// It follows FIFO order

int main()
{
	// Implementation
	queue<string> q;

	// Adding/Pushing elements
	q.push("cat");
	q.push("dog");
	q.push("squirrel");
	q.push("elephant");
	q.push("dolphin");

	// Before pop
	cout << "Size before pop -> " << q.size() << endl;

	// First element
	cout << "First element -> " << q.front() << endl;

	// After Poping
	q.pop();
	cout << "After poping, first element -> " << q.front() << endl;
	cout << "Size after pop -> " << q.size() << endl;

	// Empty or not
	cout << "Empty or not -> " << q.empty() << endl;
}