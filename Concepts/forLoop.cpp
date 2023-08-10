// for loop has 3 needs:
// 1. starting conditions, 2. termination conditions, 3. increment or decrement

/* for ( intiation : termination : increment or decrement )
    {
        execute
    }*/


#include<iostream>
using namespace std;
int main()
{
    // int a;
    // for ( /* initiation */ a = 1 ; /*termination*/ a <= 10 ; /* increment or decrement*/ a++ )
    // {
    //     cout << a <<  /*space*/" ";
    // }
    //variable can be declared inside for loop as well

    // for ( int w = 10 ; w 
    // >= 1 ; w-=2)
    // {
    //     cout << w << " ";
    // }

//--------------------------------------------------------

// Nested For Loop
int s;
cout << "Enter the Number : " ;
cin >>  s;
for ( int i = 0 ; i < s ; i++ )
{
    for ( int j = 0 ; j < s ; j++)
    {
        cout << i << " " << j << endl;
    }
}

// main
}