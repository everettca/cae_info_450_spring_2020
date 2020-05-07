
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "account.cpp"
#include "account.h"
#include "savings.h"
using namespace std;



    void DoWithdraw(double amount)
    {
        balance = balance - amount;
        numwithdraws++;
    }
    savings() {}
    savings(string name, long taxid, double balance) {}
    void display(double withdrawal)
    {
        cout << "Withdrawal amount: " + withdrawal << endl;
    }
}