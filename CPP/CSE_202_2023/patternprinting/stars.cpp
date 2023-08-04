#include<iostream>
using namespace std;
int main()



// very important from the point of view of interview
{
    int row, col ;
    cout << "Enter the row and col of pattern:"<< endl;
    cin >> row >> col;
    for (int i = 0 ; i < row ; i++)
    {
       for (int j =0 ; j < col ; j++)
       {
           cout << "@ " ;
       } cout << endl ;
    }
}