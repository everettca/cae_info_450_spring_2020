#include <iostream>
using namespace std;

int main()
{

    char names[30][100];
    int i;

    for (i = 0; i < 30; i++)
    {
        cout << "Please enter student for index " << i << ": ";

        cin.getline(names[i], 100);

      /*  if (names[i][100].empty())
        break;
        else
        {
        continue;
        }
        
        */

    }

    cout << "Student Names List:" << endl;

    for (i = 1; i < 30; i++)
    {
        cout << "students[" << i << "] = " << names[i] << endl;
    }
}