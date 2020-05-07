
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "checking.cpp"
#include "savings.cpp"
#include "creditcard.cpp"
#include "account.h"

using namespace std;

{
    void SetName()
    {
        name = "Cori";
    }
    void SetTaxID()
    {
        taxid = 0000;
    }
    void SetBalance()
    {
        balance = 100;
    }
    string GetName()
    {
        cout << "Name: " + name;
    }
    int GetTaxID()
    {
        cout << "Tax ID: " + taxid;
    }
    double GetBalance()
    {
        cout << "Balance: $" + balance;
    }
    double MakeDeposit(double amount)
    {
        balance = amount + balance;
        numdeposits++;
    }
    account()
    {}
    account(string name, long taxid, double balance)
    {}
    void display()
    {
        cout << "Name:" + name << endl;
        cout << "Tax ID: " + taxid << endl;
        cout << "Balance: " + balance << endl;
    }
}