#include <iostream>

using namespace std;

void print();
void choices();

int main() 
{
    print();
    choices();
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
void choices()
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Checking balance..." << endl;
            break;
        case 2:
            cout << "Depositing" << endl;
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

struct BankAccount
{
    float balance;
    float deposit;
    float withdraw;

    void checkBalance()
    {
        cout << "Your balance is: " << balance << endl;
    }
};