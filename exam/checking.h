
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "checking.cpp"
#include "account.h"
using namespace std;

class checking : public account
{
private:
    int last10checks[10];

public:
    void WriteCheck(int checknum, double amount);
    checking();
    checking(string name, long taxid, double balance);
    void display(int checknum, double amount);
}