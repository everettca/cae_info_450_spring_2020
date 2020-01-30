

#include <iostream>
using namespace std;

int main()
{
    int numberinput = 1, i, c = 0;

    while (numberinput > 0)
    {
        c = 0;
        cout << "Enter your Number: ";
        cin >> numberinput;
        if (numberinput > 0)
        {

            for (i = 1; i <= numberinput; i++)
            {
                if (numberinput % i == 0)
                {
                    c++;
                }
            }

            if (c == 2)
            {
                cout << numberinput << " is a prime number." << endl;
            }
            else
            {
                cout << numberinput << " is not a prime number." << endl;
            }
        }

        else
        {
            break;
        }

        continue;
    }

    return 0;
}