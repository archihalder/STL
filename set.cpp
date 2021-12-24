#include <iostream>
#include <set>
using namespace std;

/*
Set -
It only contains unique elements.

How is it implemented behind the scene?
Using BST
We cannot modify an element after inserting it into set
We can only insert or delete an element from set

Difference between set and unordered set?
Set - 
While accessing elements, we get in sorted order
It is slower than unordered set

Unordered set -
While accessing elements, we get in random order
It is faster than ordinary set
*/

void print(set<int> s)
{
	for (auto i : s)
		cout << i << " ";
	cout << endl;
}

int main()
{
	// Implementation
	set<int> s;

	// Inserting elements
	// Time complexity of inserting O(log n)
	s.insert(5);
	s.insert(6);
	s.insert(5);
	s.insert(5);
	s.insert(2);
	s.insert(5);
	s.insert(1);
	s.insert(2);
	s.insert(10);
	s.insert(12);
	s.insert(5);
	s.insert(1);
	s.insert(2);
	s.insert(2);
	s.insert(1);
	s.insert(3);
	s.insert(1);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(10);

	print(s); // here, we can see that the we are getting in sorted order
	cout << endl;

	// Erasing
	// erase() takes iterator as argument
	// Time Complexity - O(log n)
	set<int>::iterator it = s.begin(); // iterator pointing at 0
	it++;							   // iterator pointing at 1

	s.erase(it);
	cout << "After erasing element at index 1" << endl;
	print(s);
	cout << endl;

	// Count
	// Checks whether or not the given element exists
	// Time Complexity - O(log n)
	cout << "Is 5 present? -> " << s.count(5) << endl;
	cout << "Is -5 present? -> " << s.count(-5) << endl;
	cout << endl;

	// Find
	// Returns the iterator of that element
	// Time Complexity - O(log n)
	set<int>::iterator x = s.find(6); // here x is a pointer
	// we can also write
	// auto x = s.find(6);

	cout << "Set elements after 6 are: ";
	for (auto i = x; i != s.end(); i++)
		cout << *i << " ";
	cout << endl;
	cout << endl;

	// Size
	// Time Complexity - O(1)
	cout << "Size -> " << s.size() << endl;

	// Empty
	// Time Complexity - O(1)
	cout << "Is it empty? -> " << s.empty() << endl;
}