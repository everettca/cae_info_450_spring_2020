
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "account.cpp"
#include "account.h"
#include "checking.h"
using namespace std;

void WriteCheck(int checknum, double amount)
{
    int x;
    for (x = 0, x < 9, x++)
    {
        last10checks[x] = last10checks[x + 1];
    }
    checknum = last10checks[0];
    balance = balance - amount
}
checking() {}
checking(string name, long taxid, double balance) {}
void display(int checknum, double amount)
{
    cout << "Check Number: " + checknum << endl;
    cout << "Check Amount: " + amount << endl;
}
}