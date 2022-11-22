

/*
	this is the exercise in the someFunctions file
*/

#include <bits/stdc++.h>
using namespace std;

void ArrInput(int arr[], int n){

	for(int i=0 ; i<n ; i++)
		cin >> arr[i] ;
}

void ArrOutput(int arr[] , int n ){

	for ( int i = 0 ; i < n ; i++)
		cout << arr[i] << " " ;
	cout << endl;
}


int main(){

	int n=11; 
	cin >> n;
	int arr[n];

	ArrInput(arr,n);

	int x =8;
	cin >> x;

	bool present = binary_search(arr,arr+n, x);
	if(present){
		int l_posi = lower_bound(arr,arr+n,x) - arr ;
		// int u_posi = upper_bound(arr,arr+n,x) - arr ;
		cout << " Element Found at INDEX " << posi ;
	}
	else
		cout << " Element NOT Found ";

	
}
