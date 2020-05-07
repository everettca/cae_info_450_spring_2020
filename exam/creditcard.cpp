
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "account.cpp"
#include "account.h"
#include "creditcard.h"
using namespace std;

    void DoCharge(string name, double amount)
    {
        balance = balance + amount;

    }
    void MakePayment(double amount)
    {
        balance = balance - amount;

    }
    creditcard() { }
    creditcard(name, taxid, balance)  { }
    void display(double balance)  
    { 
        cout << "Credit Card Balance: " + balance << endl;
    }
}