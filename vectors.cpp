#include <iostream>
#include <vector>
using namespace std;

/*
What are vectors?
Vectors are dynamic arrays. 

Why are they called dynamic?
When the current vector is full, and we have to add a new element to it,
it creates a new vector of double the current capacity, copies all the elements 
from the first vector and then deletes the first vector

Since it can manage its size, it is called dynamic
*/

void print(vector<int> x)
{
	for (int i : x)
		cout << i << " ";
	cout << endl;
}

int main()
{
	// Implementation
	vector<int> v;		 // creates an empty vector of size 0
	vector<int> a(5, 1); // creates a vector of size 5 filled with 1's
	cout << "Elements of a" << endl;
	print(a);

	// To copy all the elements of one vector to another
	vector<int> b(a); // creates a vector called b with all the elements of a
	cout << "Elements of b" << endl;
	print(b);
	cout << endl;

	cout << "Capacity -> " << v.capacity() << endl;
	v.push_back(1); // to add or push an element into a vector

	cout << "Capacity -> " << v.capacity() << endl;
	v.push_back(2);

	cout << "Capacity -> " << v.capacity() << endl;
	// after 2 elements, it double the vector size. So capacity becomes 4

	v.push_back(3);
	cout << "Capacity -> " << v.capacity() << endl;
	cout << "Size -> " << v.size() << endl;
	// Capacity tells how much space is allocated to that vector
	// Size tells how many elements are present in that vector
	cout << endl;

	// Operations
	// To get element at specific index
	cout << "Element at 2nd index -> " << v.at(2) << endl;

	// To get first and last element
	cout << "First element -> " << v.front() << endl;
	cout << "Last element -> " << v.back() << endl;

	cout << endl;
	// pop_back()
	// removes the last element from the vector
	cout << "Before pop" << endl;
	print(v);

	v.pop_back();

	cout << "After pop" << endl;
	print(v);
	cout << "Capacity -> " << v.capacity() << endl;
}