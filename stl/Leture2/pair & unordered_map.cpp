/*
	TIME STAMP :  52:30
*/


#include <bits/stdc++.h>
using namespace std;

void pairs();
void maps(); // key : value pair or Dictionary unique keys
void unordered_mapss(); // just unordered unique keys
void multimapps(); // ordered multikeys

int main() {

	pairs();

}

void maps() {

	std::map<string, int> mapper; // map< key, value > name; it's like a dictionary

	mapper["raghu"] = 21;
	mapper["raj"] = 22;
	mapper["hekk"] = 9 ;
	mapper["hello"] = 8 ;
	mapper.emplace("gekk", 45);

	for (auto i : mapper)
		cout << i.first << " : " << i.second << endl;

	//mapper.erase(mapper.begin(), mapper.begin() + 2);

	auto it = mapper.find("raj") ; //gives location

	mapper.erase("raghu"); // erases (key)

	cout << " erase : ";
	for (auto i : mapper)
		cout << i.first << " : " << i.second << endl;
	mapper.erase(mapper.begin()); // erases iterator

	cout << " iterator :";
	for (auto i : mapper)
		cout << i.first << " : " << i.second << endl;

	// another way
	for (auto it = mapper.begin(); it != mapper.end() ; it++ )
		cout << it->first << " " << it->second << endl;

	if (mapper.empty()) // checks if map is empty or not returns a boolean
		cout << " empty " ;
	else
		cout << " not empty " ;

	mapper.count("raj"); // always return 1


}

void unordered_mapss() {

	unordered_map<string, int> map1;



}


void pairs() {

	pair<int, int> pair1, pair2;

	pair1.first = 4 ;
	pair1.second = 6 ;

	pair2 = {3, 6};

	// Nested pair

	pair<int, pair<int, pair<int, int>>> nest_pair;
	nest_pair = { 2 , { 3 , { 4, 5 }}} ;

	cout << nest_pair.first ;
	cout << nest_pair.second.first ;
	cout << nest_pair.second.second.first ;
	cout << nest_pair.second.second.second ;



	// for (auto i : pair1 )
	// cout << pair1.first << " " << pair1.second << endl;
}