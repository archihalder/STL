#include <iostream>
#include <deque>
using namespace std;

/*
Deque - Double Ended Queue
In this queue, we can do insertion and deletion from
the front and back of the queue.
It is also dynamic.
Random access of elements is possible
*/

void print(deque<int> d)
{
	for (int i : d)
		cout << i << " ";
	cout << endl;
}

int main()
{
	// Implementation
	deque<int> d;

	// Inserting elements
	d.push_back(1);	 // back
	d.push_back(2);	 // back
	d.push_front(3); // front
	d.push_front(4); // front
	print(d);
	cout << endl;

	// Removing single element
	d.pop_back();
	cout << "After pop_back " << endl;
	print(d);

	d.pop_front();
	cout << "After pop_front " << endl;
	print(d);
	cout << endl;

	// Operations
	// To get element at specific index
	cout << "Element at 2nd index -> " << d.at(1) << endl;

	// To get first and last element
	cout << "First element -> " << d.front() << endl;
	cout << "Last element -> " << d.back() << endl;

	// Check if the deque is empty or not
	cout << "Is it empty? -> " << d.empty() << endl;
	cout << endl;

	// Deleting the deque
	cout << "Before erase, the size is -> " << d.size() << endl;
	d.erase(d.begin(), d.begin() + 1); // erase takes 2 arguments for range
	// here we have deleted the first element
	cout << "After erase, the size is -> " << d.size() << endl;

	print(d);

	/*
	The size of the deque becomes 0 after erasing 
	but the Max size remains doesn't become 0

	Max size is the the capacity which is allocated
	at the beginning while creating the deque.
	Even after erasing, the Max size remains same.
	*/
}