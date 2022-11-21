

/*
	Time stamp : 23:00
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

	int n=29;
	int a[n];
	ArrInput(a,n);

	std::vector<int> vec(n,3);



	// TIME COMP : N.logN
	// sort( starting_Iterator , Ending_Iterator );

		// for arr
		sort(a,a+n); // 3 Sorts are used in the backend Best sort MEARGE SORT	


		// for vector
		sort(vec.begin(),vec.end());


		// Sort a part[3-7] in a vec/arr;
		sort(vec.begin()+3,vec.begin()+8);  // Here 3 the starting iterator INCLUDED but ENDING iterator NOT. so we add +1 to end_it



	
	// reverse( start_Iterator , end_Iterator )    NOTE: end_Iterator excluding

		reverse( a , a+n );
		reverse( vec.begin(), vec.end());
		reverse( vec.begin()+3 , vec.begin()+9 );


	// Algo for to find max & min element in arr/....

		int max = *max_element( a , a+n );  // Here ( * ) returns the element without it it will return Iterator
		int min = *min_element( a , a+n );  // of the location

	// Algo for sum in range()

		//  accumulate( Start_Iterator , End_Iterator , Initial_Sum );
		int sum = accumulate( a , a+n , 0 ); // Here " 0 " is the initial value and every element in the range added to it.
	

	// Algo for counting 

		// count( First_Iterator , End_Iterator , NUM )
		int cnt = count( a, a+n, 3);


	// Algo for find 1st occurence of " X "

		// find( Start_Iterator , End_Iterator , Element )
		auto it = find( a, a+n , 8);
			// return the Iterator of the First occurence of 8 (If it exist )
			// else will return iterator for the positon next to last

		// ______________________________________________________________________ \\

		//time : 47:00

}
