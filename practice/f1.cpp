#include<iostream>
using namespace std;
class BankAccount{
    public: 
    int balance;
};
int main(){
    BankAccount account;
    account.balance = 500;

    int depositAmount= 1000;
    account.balance +=depositAmount;

    int balance = account.balance;
    cout<<balance;
    return 0;
}