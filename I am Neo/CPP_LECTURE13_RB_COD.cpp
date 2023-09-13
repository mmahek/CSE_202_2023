#include <iostream>
#include <string>
#include <iomanip>

class BankATM
{
private:
    int atmID;
    std::string location;
    float availableCash;

public:
    BankATM(int id, const std::string &loc, float cash) : atmID(id), location(loc), availableCash(cash) {}

    void withdrawCash(float amount)
    {
        if (amount <= availableCash)
        {
            availableCash -= amount;
            std::cout << "Withdrawal successful. Available cash: " << std::fixed << std::setprecision(1) << availableCash << std::endl;
        }
        else
        {
            std::cout << "Insufficient cash in the ATM." << std::endl;
        }
    }

    void depositCash(float amount)
    {
        availableCash += amount;
        std::cout << "Deposit successful. Available cash: " << std::fixed << std::setprecision(1) << availableCash << std::endl;
    }

    void displayAvailableCash()
    {
        std::cout << "Available cash in ATM: " << std::fixed << std::setprecision(1) << availableCash;
        if (availableCash == static_cast<int>(availableCash))
        {
            std::cout << ".0";
        }
        std::cout << std::endl;
    }
};

int main()
{
    int atmID;
    std::cin >> atmID;
    std::cin.ignore(); // Clear the newline character

    std::string location;
    std::getline(std::cin, location);

    float availableCash, withdrawAmount, depositAmount;
    std::cin >> availableCash >> withdrawAmount >> depositAmount;

    BankATM atm(atmID, location, availableCash);

    atm.withdrawCash(withdrawAmount);
    atm.depositCash(depositAmount);
    atm.displayAvailableCash();

    return 0;
}
