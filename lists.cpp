#include <iostream>
#include <list>
using namespace std;

/*
In STL, doubly linked list is implemented as list.
It contains 2 pointers, one at the front and one at the back.
Here, we CANNOT directly access an element, we need to travel to it
*/

void print(list<int> l)
{
	for (int i : l)
		cout << i << " ";
	cout << endl;
}

int main()
{
	// Implementation
	list<int> l;

	l.push_back(1);
	l.push_front(2);
	l.push_back(3);
	l.push_front(4);
	print(l);

	// Copying one list to another
	list<int> n(l);
	cout << endl
		 << "Elements of n" << endl;
	print(n);
	cout << endl;

	list<int> x(6, 4); // creates a list of size 6 with 4's
	cout << "Elements of x" << endl;
	print(x);
	cout << endl;
	// Operations

	// To get first and last element
	cout << "First element -> " << l.front() << endl;
	cout << "Last element -> " << l.back() << endl;

	// Check if the deque is empty or not
	cout << "Is it empty? -> " << l.empty() << endl;
	cout << endl;

	// Erasing
	l.erase(l.begin()); // here we are pointing to first element
	cout << "After erase " << endl;
	print(l);

	// Poping
	l.pop_back();
	cout << "After pop back" << endl;
	print(l);

	l.pop_front();
	cout << "After pop front" << endl;
	print(l);

	cout << "Size -> " << l.size() << endl;
}