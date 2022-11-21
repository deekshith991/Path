/*
	TIME STAMP : 1:20:00
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

	// log N

	//	GENERAL FUNCTIONS

	//	 1. push
	//	 2. top
	//	 3. pop
	//	 4. size
	//	 5. empty


	priority_queue<int> pq;

	pq.push(1);		//| 6 |  EXAMPLE PQ
	pq.push(5);		//| 5 |
	pq.push(2);		//| 2 |
	pq.push(6);		//| 1 |

	cout << pq.top() ; // prints 6
	pq.pop();

	cout << pq.top() ; // prints 5

	priority_queue<pair<int, int>> pqk;
	pqk.push({1, 3});
	pqk.push({1, 5});
	pqk.push({1, 7});	// checks for 1st element then 2nd then 3rd prioritically
	pqk.push({2, 8});




	// MAKE MINIMUM PRIORITY QUE from MAXIMUM PRIORITY QUE

	priority_queue<int> mpq;

	mpq.push(-1);		//| -1 |  EXAMPLE MPQ
	mpq.push(-5);		//| -2 |
	mpq.push(-2);		//| -5 |
	mpq.push(-6);		//| -6 |

	// while inputting convert into NEGATIVE value
	int x; cin >> x ;
	mpq.push(-x);

	// while RETRIEVING
	cout << -1 * mpq.top() << endl;





	// MINIMUM PRIORITY QUEUE
	priority_queue<int , std::vector<int>, greater<int>> mp ;

	mp.push(1);
	mp.push(4);
	mp.push(3);
	mp.push(5);

	cout << mp.top() << endl ;

}
