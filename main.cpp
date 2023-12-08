#include <iostream>

using namespace std;

struct BankAccount;

void print();
void choices(BankAccount& myAccount);

struct BankAccount
{
    double balance;
    double deposit;
    double withdraw;

    double getBalance()
    {
        return balance;
    }

    double setBalance(double newBalance)
    {
        balance = newBalance;
        return balance;
    }
};

int main() 
{
    BankAccount myAccount;
    double startingBalance = 1000.00;

    myAccount.setBalance(startingBalance);

    print();
    choices(myAccount);
}

/*
    * Function: print
    * ----------------------------
    *   Prints the menu for the user
    * 
    *   returns: void
    
*/
void print()
{
    cout << "Welcome to your bank account!" << endl;
    cout << "-----------------------------" << endl;
    cout << "What would you like to do?" << endl;  
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

/*
    * Function: choices
    * ----------------------------
    *   Takes in the user's choice and executes the corresponding action
    * 
    *   returns: void

*/
void choices(BankAccount& myAccount)
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Checking balance..." << endl;
            cout << "Your balance is: " << myAccount.getBalance() << endl;
            break;
        case 2:
            cout << "Depositing..." << endl;
            break;
        case 3:
            cout << "Withdrawing... " << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}