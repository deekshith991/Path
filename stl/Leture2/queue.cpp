/*
	TIME STAMP : 1:15:00
*/

#include <bits/stdc++.h>
using namespace std;

void DeleteQueue( auto const &que );

int main() {

	// QUEUE : First In First Out (FiFo)

	// GENERAL FUNCTIONS

	//	 1. push
	//	 2. front
	//	 3. pop
	//	 4. size
	//	 5. empty

	queue< int > q1;
	queue< int > q2 = {1, 2, 3, 4, 5, 6 } ;

	q2.push(7);
	q2.push(8);
	q2.push(9);

	cout << q2.front(); // Prints 1
	q2.pop();
}

void DeleteQueue( auto const &que ) {

	while (!que.empty())
		que.pop();

}
