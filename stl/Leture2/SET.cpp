/*
	TIME STAMP = 9:00[]
	AGENA : SET& UNORDERED_SET & multiset & maps

	ERRORS : erase start&end iterator
*/


#include <bits/stdc++.h>
using namespace std;

void set__s();
void multiset__s();
void Dispaly(auto const &container);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdin);
#endif

	int t; cin >> t;

	// multiset__s();
	maps();

}

void set__s() {

	int n = 8;
	// set : it will store unique elements in ascending order

	set<int> s1;
	unordered_set<int> unordset;

	// Insert unique elements in a set

	for	(int i = 0 ; i < n; i++) {

		int x; cin >> x;
		s1.insert(x);

	}

	// Print SET elements
	for (auto i : s1)
		cout << i << " ";

	cout << endl;
	s1.clear();

	// Erase a element from SET
	set<int> s2 = {1, 2, 3, 5, 7, 9, 9};

	s2.erase(2); Dispaly(s2);

	// Erase from a point to another

	cout << " erase : ";
	s2.erase(s2.begin(), s2.end());

	Dispaly(s2);
}

void multiset__s() {

	multiset<int> ms; // ordered duplicate storable set

	ms.insert(7);
	ms.insert(8);
	ms.insert(78);
	ms.insert(75);
	ms.insert(9);
	ms.insert(70);
	ms.insert(77);
	ms.insert(779);
	ms.insert(7);
	ms.insert(7);
	ms.insert(7);
	ms.insert(7);


	Dispaly(ms);

	ms.erase(7);
	set<int>::iterator i = ms.begin();
	//i += 2;
	//ms.erase(ms.begin(), i); // deletes all occurrences of 7
	Dispaly(ms);


	set<int> set1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	//set1.erase(set1.begin(), set1.begin() + 2);


	multiset<int> set2 = {1, 1, 1, 1, 1, 1, 2, 2, 3, 4, 5, 6, 7};

	cout << "count : " << set2.count(1);

}


void Dispaly(auto const &container) {
	for (auto i : container)
		cout << i << " ";
	cout << endl;
}



