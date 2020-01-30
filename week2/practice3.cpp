
#include <iostream>
using namespace std;

int main()
{
    int numberinput;
    bool leapyear;

    numberinput = 1;
    while (numberinput > 0)
    {

        cout << "Enter your Number: ";
        cin >> numberinput;

        if (numberinput % 4 == 0)
        {
            if (numberinput % 100 == 0)
            {
                if (numberinput % 400 == 0)
                {
                    leapyear = true;
                }
                else
                {
                    leapyear = false;
                }
            }
            else
            {
                leapyear = true;
            }
        }

        else
        {
            leapyear = false;
        }

        if (leapyear == true)
        {
            cout << numberinput << " is a leap year." << endl;
        }
        else if (leapyear == false)
        {
            cout << numberinput << " is not a leap year." << endl;
        }

        continue;
    }

    return 0;
}