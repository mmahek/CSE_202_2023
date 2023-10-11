#include<iostream>
using namespace std;

int main(){
    int row, col;
    int a[row][col];
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of cols: ";
    cin >> col;

    int **arr = new int *[row];
    for( int i= 0; i< row; i++){
        arr[i] = new int[col];
    }
    //input
    for( int  i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
            cout << "a[" << i << "]" << "[" << j << "] = " ;
            cin >> a[i][j] ;
        }
    }
    int sum = 0;
    int maxSum = 0;
    int rowCount = 0;

    //printing
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         sum = sum + arr[i][j];
    //         cout << a[i][j]  << " ";
    //     }
    for(int i = 0 ; i < row ; i++){
        for(int j = col; i > 0; j--){
            cout << a[i][j] << " ";
        }
        if(sum > maxSum ){
            maxSum = sum;
            rowCount++;
            sum = 0;
        }
        else{
            continue;
        }
        cout << endl;
    }
    cout << "\nMaximum row Sum is " << maxSum << " of row " << rowCount << endl;
    // deallocate memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
    }

    
    