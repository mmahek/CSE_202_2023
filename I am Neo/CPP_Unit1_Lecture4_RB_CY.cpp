// #include <iostream>
// using namespace std;
// struct patient{
//     public:
//     int id;
//     int gender;
//     int age;
//     }pat;

//     void print_gender(int m, int f){
//         if(pat.gender == 1){
//             m = m + 1 ;
//             cout < < m;
//         }
//         else if(pat.gender == 2){
//             f =f + 1;
//             cout << af;
//         }
//         void print_age(int af){
//             af = af + 1;
//             cout << af;
//         }
//     }
// int main(){
//     int maleP, femaleP, ageP, idP, n;
//     cin >> n;
//     for(int i = 0 ; i < n ; i++){
//         cin >> pat.id >> " " >> pat.gender >> " " >> age;
//     }
//     print_gender(maleP, femaleP);
//     return 0;
// }
#include <iostream>
using namespace std;

struct patient
{
    int id;
    int gender;
    int age;
} pat;

void print_gender(int &maleP, int &femaleP)
{
    if (pat.gender == 1)
    {
        maleP = maleP + 1;
    }
    else if (pat.gender == 2)
    {
        femaleP = femaleP + 1;
    }
}

void print_age(int &af)
{
    if(pat.age > 40){
    af = af + 1;
    cout << af;
}
}

int main()
{
    int maleP = 0, femaleP = 0, ageP, idP, n, af = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> pat.id >> pat.gender >> pat.age;
        print_gender(maleP, femaleP);
        print_age(af);
    }

    cout << maleP << " " << femaleP << endl;
    cout << af;

    return 0;
}
