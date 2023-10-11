#include<iostream>
using namespace std;
int main(){
   /* //create
    int array[3][4];

    //take input
    for( int row = 0; row < 3; row++){
        for( int col = 0; col < 4 ; col++){
            cin >> array[row][col];
        }
    }

    //print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << array[row][col] << " ";
        }
        cout << endl;
    }*/

//dynamically creating array
    // int n;
    // cin >> n;

    // int** arr = new int*[n];

    // //create
    // for (int i = 0; i < n; i++){
    //     arr[i] = new int[n];
    // }

    // //input

    // for(int i = 0; i < n ; i++){
    //     for(int j = 0; j < n ; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // //printing
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }

   int row, col;
   cout << "Enter row : " ;
   cin >> row;
   cout << "Enter col : ";
   cin >> col;
   int **arr = new int *[row];

   for (int i = 0; i < row; i++)
   {
       arr[i] = new int[col];
    }

    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr[" << i << "]" << "[" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int maxSum = 0;
    int rowCount = 0;
    // printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
            cout << arr[i][j] << "   ";
            
        }
        //cout << "sum : " << sum << endl;
        if (sum > maxSum ){
            maxSum = sum;;
            rowCount++;
            sum = 0;
        }
        else{
            continue;
        }
        cout << endl; 
    }
    cout << "\nMaximum Sum is " <<  maxSum << " of row " << rowCount ;
    
    //this all is done in heap memory thus it must be deleted
    
    //deallocate memory
    for(int  i = 0 ; i <row; i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}