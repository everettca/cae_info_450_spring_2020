

#include <iostream>
using namespace std;

int main()
{
    double numberinput, numberinputsquare;
    numberinput = 1;
    while (numberinput > 0)
    {
        cout << "Enter your Number: ";
        cin >> numberinput;

        if (numberinput > 0)
        {
            numberinputsquare = numberinput * numberinput;
            cout << "The square of your number is " << numberinputsquare << endl;
        }
        else
        {
            break;
        }

        continue;
    }

    return 0;
}