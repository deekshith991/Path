
/* SOME WEIRD PROBLEM

	striver  code beyond channel stl cpp Leture 1
	time stamp : 14:30 struct proper usage this is oops concept

*/
#include <bits/stdc++.h>
using namespace std;

// A normal Method we use to define the struct

struct normalStruct {

	string hello;
	int num;

};

// a proper way to define a struct is to add a CONSTRUCTOR type thing to the struct

struct node {

	int num;

	node (int num_) {
		num = num_;
	}
};






int main(int argc, char const *argv[]) {

// #ifndef ONLINE_JUDGE

// 	freopen("input", "r", stdin);

// 	freopen("output", "w", stdout);
// #endif



	node guy = node(9);

	return 0;
}