// #include <iostream>
// using namespace std;
// //calling of a function again and again by itself
// // f(n) = 2*f(n-1)
// int factorial(int n){
//     if(n==0) return 1;
// // int smallProb = factorial(n-1);
// // int bigProb = n * smallProb;
// // return bigProb;
// return n*factorial(n-1);
    
//     return 0;
// }
// int main(){
//     int n;
//     cin >> n;
//     int ans = factorial(n);
//     cout << ans << endl;
// }
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * fact(n - 1);
    }
}
int power(int n){
    if(n==0)return 1;
    return 2*power(n-1)
}
int main()
{
    int n;
    cin >> n;
    // int ans=1;
    int ans2 = power(10)
    cout << fact(n);
    cout << ans2 << endl;
    return 0;
}