#include <iostream>
#include <array>
using namespace std;

int main()
{
	// Normal array
	int arr[3] = {1, 2, 3};

	// Array using STL

	// Syntax ->
	// array<data_type, size_of_array> array_name
	array<int, 4> A = {4, 5, 6, 7};

	// Array size
	int n = A.size();

	// Accessing array
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	// Operations and their Time Complexity
	// To get element at specific element
	cout << "Element at 2nd index -> " << A.at(2) << endl; // O(1)

	cout << "Empty or not -> " << A.empty() << endl; // O(1)

	// To get first and last element
	cout << "First Element -> " << A.front() << endl; // O(1)
	cout << "Last Element -> " << A.back() << endl;	  // O(1)
}