#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverse(string *s1);
int main()
{
    string string1;
    cout << "Please enter a string to be reversed: ";
    getline(cin, string1);
    reverse(string1);
    cout << "The reverse of your string is: " << reverse(string1);
}
string reverse(string *s1)
{

    int length;
    length = s1.length();

    int x;

    for (x = 0; x = length / 2; x++)
    {
        int a;
        s1[x] = a;
        s1[x] = (s1[length - x - 1]);
        a = s1[length - x - 1];
    }
}
