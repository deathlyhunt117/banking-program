#include <iostream>
#include <iomanip>
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    cout << "Your balance is $" << balance << endl;
    do
    {
        cout << "******************\n";
        cout << "Enter your choice:\n";
        cout << "*****************\n";
        cout << "1. Show your balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;
        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thanks for visiting\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 4);
    return 0;
}

void showBalance(double balance)
{
    cout << "Your current balance: $" << balance << endl;
}

double deposit()
{
    double amount = 0;
    cout << "Enter the amount to be deposited: ";
    cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "That's not a valid amount\n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "***********Insufficient funds*********\n\n";
        return 0;
    }
    else if (amount < 0)
    {
        cout << "That's not a valid amount\n\n";
        return 0;
    }
    return amount;
}
