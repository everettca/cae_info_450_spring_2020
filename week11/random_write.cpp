#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream out("randoms.txt");
    if (!out)
    {
        cout << "Cannot open file." << endl;
        return 1;
    }

    int count;
    int num;
    for (count = 1; count < 1001; count++)
    {
        num = rand() % 20001 - 10000;
        out << num << endl;
    }
    out.close();
    return 0;
}