
//STL - Standard Templatre Library
//Type of STL Containers

/*
    1. Sequential container - It allows us to store elements that can accessed in sequential order e.g -Array, List, Vector.
    2. Associative Containers - It allows us to store elements in sorted order, the order doesn't depend upon when the element is inserted. eg - Set, MAp, Multiset, Multimap
    
    3. Unordered Associative containers - It provides the unsorted version of associative containers. eg - Unordered set, unordered map, unordered multiset, unordered multimap
//      */
// int main(){
//     // vector<int> num = {1,2,3,4,5,5};

//     // for(auto nums : num){
//     //     cout << nums << " ";
//     // }

//     //set<int> num = {1,9,10,7,10};

//     unordered_set<int> num - {4,2,9,7,10};
//     for( auto nums : num){
//         cout << nums << " ";
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

int main() {
    // Example of vector
    cout << "Vector : ";
    vector<int> numVector = {1, 2, 3, 4, 5, 5};
    for(auto num : numVector) {
        cout << num << " ";
    }
    cout << endl;

    // Example of set
    cout << "Set : ";
    set<int> numSet = {1, 9, 10, 7, 10};
    for(auto num : numSet) {
        cout << num << " ";
    }
    cout << endl;

    // Example of unordered_set
    cout << "Unordered_Set : ";
    unordered_set<int> numUnorderedSet = {4, 2, 9, 7, 10};
    for(auto num : numUnorderedSet) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
