#include <iostream>
using namespace std;

//this function returns the sum of all elements of array created 
int getSum(int* arr, int n){
    int sum = 0 ;
    for( int  i = 0 ; i < n ; i++ ){
            sum+= arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter the size of array: " ;
    cin >> n;

    // variable size array
    int *arr = new int[n];
    //memory is allocated at runtime

    for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum is: " << ans << endl;
    return 0;
}`