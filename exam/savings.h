
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "account.cpp"
#include "account.h"
#include "savings.h"
using namespace std;

class savings : public account
{
public:
    void DoWithdraw(double amount);
    savings();
    void display(double withdrawal);
}