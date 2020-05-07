
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "account.cpp"
using namespace std;

class account

    private : string name;
long taxid;
double balance;

protected:
int numdeposits, numwithdraws;

public:
void SetName();

void SetTaxID();

void SetBalance();

string GetName();

int GetTaxID();

double GetBalance();

double MakeDeposit(double amount);

account();

account(string name, long taxid, double balance);

void display();