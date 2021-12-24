#include <iostream>
#include <map>
using namespace std;

/*
Map - 
This is based on Red/Black Tree or balanced tree.
It contains of keys and values.
Each key has a unique value, but a different keys can point to same value.
Gives the keys in sorted order
Time Complexity for insert, count, erase, find -> O(log n)

Unordered Map - 
It is based on Hash Tables
Gives the keys in random order
Time Complexity for insert, count, erase, find -> O(1)
*/

void print(map<int, string> m)
{
	for (auto i : m)
		// i.first -> key; i.second -> value
		cout << i.first << " " << i.second << endl;
	cout << endl;
}
int main()
{
	// Implementation
	map<int, string> m;

	// Adding elements
	m[1] = "apple"; // here 1 -> key, "apple" -> value
	m[10] = "banana";
	m[7] = "orange";
	m[5] = "kiwi";
	m.insert({6, "papaya"}); // another way of inserting element
	print(m);

	// Count
	// checks whether or not the key is present
	cout << "Is 10 present? -> " << m.count(10) << endl;
	cout << "Is 50 present? -> " << m.count(50) << endl;
	cout << endl;

	// Erase
	m.erase(7);
	cout << "After erasing 7" << endl;
	print(m);

	// Find
	auto it = m.find(5);
	for (auto i = it; i != m.end(); i++)
		// also can be written as i->first
		cout << (*i).first << " ";
	cout << endl;
}