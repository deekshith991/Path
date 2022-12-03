

/*
	https://www.youtube.com/watch?v=edJ19qIL8WQ&list=PLgUwDviBIf0qYbL4TBaEWgb-ljVdhkM7R

	THIS VIDEO SHOWS SIMPLE IMPLEMENTATIONOF BINARY SEARCH
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int a[10] ={0,0};

	int Search_Ele =23;

	bool Ele_Present = binary_search(a,a+10,Search_Ele); // is Search_Ele present or NOT
	if(Ele_Present){
		int position = lower_bound(a,a+10,Search_Ele) - a ; // prints posi
		cout << position+1;
	}
	else
		cout << "Not found\n";

	

	// last occurence of a num

	int b[13]={1,2,3,4,5,7,8,8,8,89,90};

	int Search_val = 8 ;
	int index = upper_bound(b,b+13,Search_val) - b;
	
	if(b[index-1] == Search_val)
		cout << index ;
	else
		cout << "NOT FOUND" ;

	
}

