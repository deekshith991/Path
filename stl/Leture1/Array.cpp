
/* TIME STAMP ; 24:00  */
#include <bits/stdc++.h>
using namespace std;

int main() {

	// arrays
	int arr0[10]; // {random,random , ....}

	array<int, 4> arr1; // same

	array<int, 3> arr2 = {4} ; // but here first is 4 and all elements are 0

	// dotfill function
	array<int, 100> arr3 ;
	arr3.fill(2); // here this function fills all the elments with given value


	int index = 2;
	cout << arr2.at(index) << endl; // replacement for a[2]

	for (int i = 0; i < 100; i++ )
		cout << arr3.at(i) << " ";


	// iterators
	// begin(),end(),rbegin(),rend()

	// begin() -> addr of the first element
	// end() -> addr of the next element right after the arr

	// rbegin() -> addr first element in reverse direction i.e., the last element addr
	// rend() -> addr of the next element right after the end element in reverse addr i.e., addr of the element just before the first

	array<int , 10> arr4 = {3, 5, 67, 8, 3, 5, 7, 9, 6, 9};
	cout << endl;
	for (auto it = arr4.begin(); it != arr4.end() ; it++) {
		cout << *it << " " ;
	}

}