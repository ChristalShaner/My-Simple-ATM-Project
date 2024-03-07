#include <iostream>


using namespace std;


void showMenu()
{
    cout<<  "*************ATM**************"<<endl;
    cout << "---------MENU OPTIONS---------" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "------------------------------" << endl;
    cout<<  "******************************"<<endl;
}

int main()
{

    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do
    {
        showMenu();
        cout << "Please choose an option: ";
        cin >> option;
        
        switch (option)
        {
        case 1:
            cout << "Balance is: $" << balance<< endl;
            break;
        case 2:
            cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            cout<<"New balance: $"<<balance<<endl;
            break;
        case 3:
            cout << "Withdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;

            if (withdrawAmount <= balance){
                balance -= withdrawAmount;
                cout<<"New balance: $"<<balance<<endl;}
                
            else{
                cout << "Not enough money" << endl;}
            break;
        }
    } while (option != 4);
    if(option == 4){
        cout<<"Have a nice day!"<<endl;
    }
    return 0;
}
