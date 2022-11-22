

/*
	this is the exercise in the someFunctions file
*/

#include <bits/stdc++.h>
using namespace std;

void ArrInput(int arr[], int n){

	for(int i=0 ; i<n ; i++)
		cin >> arr[i] ;
}

void ArrOutput(int arr[] , int n){

	for ( int i = 0 ; i < n ; i++)
		cout << arr[i] << " " ;
	cout << endl;
}

void myway(int arr[], int n, int key) {

	// time comp : 2logN

	bool present = binary_search(arr, arr + n, key);
	if (present) {
		int l_posi = lower_bound(arr, arr + n, key) - arr ;
		// int u_posi = upper_bound(arr,arr+n,x) - arr ;
		cout << " Element Found at INDEX " << l_posi ;
	}
	else
		cout << " Element NOT Found ";
}

void striverWay(int arr[],int n , int key){

	int index = lower_bound( arr ,arr + n , key) - arr ;
	if(index != n && arr[index] == key)
		cout << " FOUND at index " << index;
	else 
		cout << "Not FOUND";

}


int main(){

	int n=11; 
	cin >> n;
	int arr[n];

	ArrInput(arr,n);

	int x =8;
	cin >> x;

	myway(arr,n,x);


	
}
