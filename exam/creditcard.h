#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "account.cpp"
#include "account.h"
#include "creditcard.cpp"
using namespace std;

class creditcard : public account
{
private:
    long cardnumber;
    string last10changes[10];

public:
    void DoCharge(string name, double amount);

    void MakePayment(double amount);

    creditcard();
    creditcard(name, taxid, balance);
    void display(double balance);
}
