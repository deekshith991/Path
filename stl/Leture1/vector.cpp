
/* time stamp : 53:00 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	vector<int> arr; // zero size arr

	cout << arr.size() << endl;

	arr.push_back(3); // arr size increased BY 1 and it is filled by 3
	cout << arr.size() << endl;

	arr.push_back(6);
	arr.emplace_back(4); // push and emplace both are same
	cout << arr.size() << endl;

	for (auto i : arr)
		cout << i << " ";


	cout << endl;

	arr.pop_back(); // decreases the size by 1
	cout << arr.size() << endl;

	for (auto i : arr)
		cout << i << " ";

	cout << endl;
	cout << endl;

	arr.clear(); // clears all the arr and decreases the size to 0

	cout << arr.size();


	cout << "\n\n";
	vector<int> arr2(4, 19);

	for (auto i : arr2)
		cout << i << " ";

	cout << "\n\n";
	vector<int> vec2(arr2.begin(), arr2.end()); // copying arr2 into vec2
	vector<int> vec3(arr2); //same as above

	for (auto i : vec3)
		cout << i << " ";

	//look mateix exercise

	return 0;
}
