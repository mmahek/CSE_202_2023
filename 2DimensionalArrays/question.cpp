#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return true; 
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col; j++){
            cout << arr[i][j] << "  ";
            sum+=arr[i][j];
        }
        cout << endl;
    }
}
int wavePrint(int arr[][4], int row, int col){
    for(int col = 0; col < 4; col++){
        if(col % 2 == 0){//even column number
            for(int row = 0; row < 4; row++){
                cout << arr[row][col] << " ";
            }
        }
        else if(col % 2 != 0){//odd column number
            for(int row = row -1; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }
    }
    cout << endl;
}


int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; 
    for( int i = 0; i < 3; i++){
        for(int j = 0 ; j < 4; j++){
            cout << arr[i][j] << "      ";
        }
        cout << endl;
    }
    // cout << "Element to search : ";
    // int target ;
    // cin >> target;
    // if(isPresent(arr, target, 3,4)){
    //     cout << "Present" << endl;
    // }
    // else{
    //     cout << "Not present" << endl;
    // }

    wavePrint(arr, 3, 4);
    return 0;
}
/* HOMEWORK highest sum of row? write method
store the value of summation of each row and when next row's summation is calculated, check if it is greater that before, if yes then replace the sum with greater one and at last print the sum*/