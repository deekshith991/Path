#include <bits/stdc++.h>
using namespace std;

void check() {
#ifndef ONLINE_JUDGE
	freopen("input", "r", stdin);
	freopen("output", "w", stdout);
#endif
}
int main() {
	check();
	// create a matrix with vectors and push/emplace_backs
	cout << " Enter matrix Rows: ";
	int r, c;
	cin  >> r;
	cout << "Enter matrix col : ";
	cin >> c;

	cout << endl;
	// 10 * 20 vector
	vector<vector<int> > vec(10, vector<int> (20, 0));

	//10*20*30

	vector<vector<vector<int>>> v1(10, vector<vector<int>> vec2(20 , vector<int>(30, 0)));	// for (auto vtr : vec) {
	// 	for (auto it : vtr)
	// 		cout << it << " ";
	// 	cout << endl;
	// }
	cout << "DONE";
	cout << endl;

}