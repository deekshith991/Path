
#include <bits/stdc++.h>
using namespace std;

long long power(int x,int pow){

	int result=1;
	while(pow > 0){
		
		if(pow&1)
			result = result * x;

		x=x*x;
		pow = pow/2;
		
	}

	return result;
}

int main(){

	int x, pow;

	cout << power(2,9);
	return 0;
}
