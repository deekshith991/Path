

/*

*/

#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n%2==0 &&  n >2)
		return false ;

	for(int i=3 ; i <= sqrt(n) ; i+=2 ){
		if(n%i == 0 )
			return false;
	}
	return true;
}

int main(){

	for(int i=1 ; i<=100 ; i++){
		if(prime(i))
			cout << i << " ";
	}
}
//1 2 3 5 7   11 13 17 19 23    29 31 37 41 43 47    53 59 61 67 71 73 79 83 89 97
//	  3 5 7   11 13 17 19 23    29 31 37 41 43 47    53 59 61 67 71 73 79 83 89 97  
//	  3 5 7   11 13 17 19 23    29 31 37 41 43 47    53 59 61 67 71 73 79 83 89 97 
//	  3 5 7 9 11 13 17 19 23 25 29 31 37 41 43 47 49 53 59 61 67 71 73 79 83 89 97 
