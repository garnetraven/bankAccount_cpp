#include <iostream>

using namespace std;

void print();

int main() 
{
    cout << "Hello World!" << endl;
    return 0;
}

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