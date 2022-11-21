/*
	TIME STAMP : 1:07:00
*/


#include <bits/stdc++.h>
using namespace std;

void DeleteStack(auto const &st );

int main() {

	stack<int> st; // last  in first  out

	//		general main use functions
	// 		1. push / emplace
	// 		2. pop
	// 		3. top
	// 		4. size
	//		5. empty

	st.push(7);
	st.push(9);
	st.push(2);
	st.push(3);
	st.push(1);
	st.push(34);
	st.push(5);

	// pic:
	// | 5 |
	// | 34|
	// | 1 |
	// | 3 |
	// | 2 |
	// | 9 |
	// | 7 |

	cout << st.top(); // prints 5 as it is last in
	st.pop();         // removes the top ele as first out


	// WARNING

	stack<int> st2;
	// cout << st2.top() ;  Gives RUNTIME ERROR as there is nothing in stack use the check

	if (!st2.empty())
		cout << st2.top() << endl ;



}


void DeleteStack(auto const &st ) {

	bool flag = st.empty();

	while (flag)
		st.pop();
}