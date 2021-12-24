#include <iostream>
#include <queue>
using namespace std;

/*
Priority queue - 
This uses Max Heap and Min Heap
In Max Heap, we always get the greatest element first.
In Min Heap, we always get the least element first.
*/

int main()
{
	// Implementation

	// Max Heap
	priority_queue<int> maxh;

	// Min Heap
	priority_queue<int, vector<int>, greater<int>> minh;

	// Opeations on Max Heap
	cout << "FOR MAX HEAP :-" << endl;

	// Adding/Pushing element
	maxh.push(15);
	maxh.push(35);
	maxh.push(63);
	maxh.push(89);
	maxh.push(7);

	// Size
	cout << "Size -> " << maxh.size() << endl;

	// Accessing elements
	int n = maxh.size();
	for (int i = 0; i < n; i++)
	{
		cout << maxh.top() << " ";
		maxh.pop();
	}
	cout << endl;
	cout << endl;

	// Opeations on Min Heap
	cout << "FOR MIN HEAP :-" << endl;

	// Adding/Pushing element
	minh.push(15);
	minh.push(35);
	minh.push(63);
	minh.push(89);
	minh.push(7);

	// Size
	cout << "Size -> " << minh.size() << endl;

	// Accessing elements
	int m = minh.size();
	for (int i = 0; i < m; i++)
	{
		cout << minh.top() << " ";
		minh.pop();
	}
	cout << endl;

	// Empty or not
	cout << "Are you empty? -> " << minh.empty() << endl;
}