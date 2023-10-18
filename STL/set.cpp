#include<iostream>
#include<set>
using namespace std;

//SET -
    /*
    #include<set>
    1. They store unoque elements of SAME TYPE in a SORTED manner.
    2. Immutable - Values can be added or removed from a set but we can't change the values of existing elements.

    */

int main(){
     set<int> mySet; //= {5, 3, 8, 1, 3};
    // for(auto val : mySet){
    //     cout << val << " ";
    // }
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(4);

    cout << "Set before deletion: ";
    for (auto val : mySet){
        cout << val << " ";
     }
     cout << endl;

    mySet.erase(4);
    cout << "Set after deletion: ";
    for (auto val : mySet)
    {
        cout << val << " ";
    }
    cout << endl;
    //mySet.clear();
    cout << "Cleared: " ;
    for (auto val : mySet)
    {
        cout << val << " ";
    }
    cout << "Set is deleted.";
    cout << endl;
    cout << mySet.empty();//gives 1 when set is empty and 0 when set is no empty
    cout << endl;
    cout << mySet.size();
    return 0;
     
}