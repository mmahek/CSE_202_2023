#include<iostream>
using namespace std;

/*
    Tower of Hanoi

    Problem statement: 
    - 3 towers namely source tower, auxiliary tower and destination tower
    - Source tower contains a set of discs stacked with the largest at the bottom and the smallest on top.
    - The objective is to transfer the entire discs from the source to destination tower maintaining the same order of the discs, using auxiliary tower.

    Rules:
    1. Only 1 disc is allowed to move at a time.
    2. Never a larger disc can be placed on a smaller disc during the transfer.
*/

void towerOfHanoi(int n, char src, char aux, char dest){//src, aux and dest are names of tower
    //base case
    if( n == 1){
        cout << "Move disc :: " << n << " from " << src << " to " << dest << endl;
        return;
    }
    towerOfHanoi( n-1, src, dest, aux);
    cout << "Move disc :: " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi( n-1, aux, src, dest);
}
int main(){
    int n;
    cout << "Enter the number of discs : " ;
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}