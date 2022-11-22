

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
	// ArrInput(a,n);

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

		// [ NOTE ] can't use for big numbers
		//  accumulate( Start_Iterator , End_Iterator , Initial_Sum );
		int sum = accumulate( a , a+n , 0 ); // Here " 0 " is the initial value and every element in the range added to it.
	

	// Algo for counting 

		// count( First_Iterator , End_Iterator , NUM )
		int cnt = count( a, a+n, 3);


	// Algo for find 1st occurence of " X " 
		// TIME COMP : O(n)

	vector<int> arr= {1,2,3,4,8,9};

		// find( Start_Iterator , End_Iterator , Element )
		auto it = find( arr.begin(), arr.end() , 8);
		if(it == vec.end())  									// return the Iterator of the First occurence of 8 (If it exist )
			cout << "element not found" ;     			    	// else will return iterator for the positon next to last
		else    												// to get the position SUBTRACT BEGIN
			cout << "found at index " << it-arr.begin(); 		// or vec.begin() work for vectors


	// binary_search
			// it only returns TRUE or FALSE
		bool PresentOrNot = binary_search(vec.begin(),vec.end(),8);


	// lower_bound     [TIME COMP : log N]

		// when x is passed to the function
		// it returns the iterator to element that is not less than x

		// a[n] = {1, 2, 4, 6, 8, 12, 13, 17, 17, 30}

		// x=17
		// it points to first 17 as 13 < 17 but ( 17 NOT < 17 )
		
		// x=25
		// it points to 30
		
		// x=3424
		// it points to the [END]

	int x=13;
	auto i = lower_bound(vec.begin(),vec.end(),x);

	int position = i - vec.begin();

	// upper_bound  

		// it points to the element that is just GREATER than x  ;
		
		// a[n] = {1, 2, 4, 6, 8, 12, 13, 17, 17, 30}
		
		// x = 8
		// it points to " 8 "

		// x = 30 / 75756
		// it points to "[ END ]"

	auto j = upper_bound(vec.begin(),vec.end(),3);
	int posi = j - vec.begin();

	// Exercise 01 find an element x ?

}
