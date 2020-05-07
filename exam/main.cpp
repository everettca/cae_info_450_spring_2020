
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "account.cpp"
#include "account.h"
#include "checking.cpp"
#include "savings.cpp"
#include "creditcard.cpp"

using namespace std;

int main()
{
    checking.SetName();
    checking.SetTaxID();
    checking.SetBalance();

    savings.SetName();
    savings.SetTaxID();
    savings.SetBalance();

    creditcard.SetName();
    creditcard.SetTaxID();
    creditcard.SetBalance();

    while (1)
    {
        cout << endl;
        cout << "Checking " + checking.GetBalance() << endl;
        cout << "Savings " + savings.GetBalance() << endl;
        cout << "Credit Card " + creditcard.GetBalance() << endl;
        cout << endl;
        cout << "1. Savings Deposit" << endl;
        cout << "2. Savings Withdrawal" << endl;
        cout << "3. Checking Deposit" << endl;
        cout << "4. Write A Check" << endl;
        cout << "5. Credit Card Payment" << endl;
        cout << "6. Make A Charge" << endl;
        cout << "7. Display Savings" << endl;
        cout << "8. Display Checking" << endl;
        cout << "9. Display Credit Card" << endl;
        cout << "0. Exit" << endl;

        int selection;
        cin >> selection;

        if
            selection == 0
            {
                break;
            }

        if
            selection == 1
            {

                cout << "Enter an amount to deposit: " << endl;
                double depositamount;
                cin >> depositamount;
                savings.MakeDeposit(depositamount);
            }
        if
            selection == 2
            {
                cout << "Enter an amount to withdraw: " << endl;
                double withdrawamount;
                cin >> withdrawamount;
                savings.DoWithdraw(withdrawamount);
                savings.display(withdrawamount);
            }
        if
            selection == 3
            {

                cout << "Enter an amount to deposit: " << endl;
                double depositamount;
                cin >> depositamount;
                checking.MakeDeposit(depositamount);
            }
        if
            selection == 4
            {
                cout << "Enter check number: " << endl : int checknumber;
                cin >> checknumber;
                cout << "Enter check amount: " << endl;
                double checkamount;
                cin >> checkamount;
                checking.WriteCheck(checknumber, checkamount);
                checking.display(checknumber, checkamount);
            }
        if
            selection == 5
            {

                cout << "Enter an amount to pay: " << endl;
                double depositamount;
                cin >> depositamount;
                creditcard.MakePayment(depositamount);
            }
        if
            selection == 6
            {
                count << "Enter card name: " << endl;
                string cardname;
                cin.getline(cardname);
                cout << "Enter charge amount: " << endl;
                double chargeamount;
                cin >> chargeamount
                creditcard.DoCharge(cardname, chargeamount);
            }
        if
            selection == 7
            {
                cout << "Current Savings" + savings.GetBalance() << endl;
            }
        if
            selection == 8
            {
                cout << "Current Checking" + checking.GetBalance() << endl;
            }
        if
            selection == 9
            {
                cout << "Current Credit Card" + creditcard.GetBalance() << endl;
            }

        else
        {
            cout << "Invalid Input." << endl;
        }
    }
    return 0;
}
