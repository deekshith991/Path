

/*


	Looks like we can access the vectors just like an array

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int n; cin >> n; // Getting size 
	vector<vector<int>> vec;


	for(int i =0; i < n ; i++ ){
		vector<int> row;
		for(int j =0; j < n ; j++ ){
			int x ; cin >> x;
			row.push_back(x);					
		}
		vec.push_back(row);
	}



	// 2D vector output
	for(auto i: vecd){
		for(auto k : i)
			cout << k << " ";
		cout << endl;
	}
	cout << endl;



	// 2D vec output
	for( int i=0 ; i<n ; i++ ){
		for( int j=0; j<n ; j++ )
			cout << vecd[i][i] << " ";
		cout << endl;
	}

	

}
