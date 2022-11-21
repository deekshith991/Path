
#include <iostream>
#include <set>

using namespace std;

int main()
{

    // set declaration
    set<int> myset{1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 23, 34, 546, 67};
    set<int>::iterator it, it2;
    it = myset.find(3);
    it2 = myset.find(9) ;
    myset.erase(it, it2);


    for (auto it = myset.begin();
            it != myset.end(); ++it)
        cout << ' ' << *it;
    return 0;
}