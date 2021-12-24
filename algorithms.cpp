#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v)
{
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> v;

	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(8);
	print(v);
	cout << endl;

	// for binary search we need the elements in sorted order
	// Syntax -
	// binary_search(starting_iterator, ending_iterator, searching_element)
	cout << "Is 6 present? -> " << binary_search(v.begin(), v.end(), 6) << endl;
	cout << "Is 7 present? -> " << binary_search(v.begin(), v.end(), 7) << endl;
	cout << endl;

	cout << "Lower Bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
	cout << "Upper Bound -> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
	cout << endl;

	int a = 5, b = 9;
	cout << "Max of a and b -> " << max(a, b) << endl;
	cout << "Min of a and b -> " << min(a, b) << endl;

	swap(a, b);
	cout << "a -> " << a << " and b -> " << b << endl;
	cout << endl;

	string s = "good morning";
	reverse(s.begin(), s.end());
	cout << s << endl;
	cout << endl;

	// Rotate
	rotate(v.begin(), v.begin() + 1, v.end());
	// the middle parameter is for how many elements we are rotating
	cout << "After rotating 1 element -> ";
	print(v);

	// Sort
	// This sort is based on a combination of 3 sorting methods
	// Quick Sort, Heap Sort and Insertion Sort
	sort(v.begin(), v.end());
	cout << "After sorting -> ";
	print(v);
}