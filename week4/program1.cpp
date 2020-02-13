#include <iostream>
#include <cmath>
using namespace std;

int main()

{

    int array[10];

    cout << "Enter the number for index 0: ";
    cin >> array[0];

    cout << "Enter the number for index 1: ";
    cin >> array[1];

    cout << "Enter the number for index 2: ";
    cin >> array[2];

    cout << "Enter the number for index 3: ";
    cin >> array[3];

    cout << "Enter the number for index 4: ";
    cin >> array[4];

    cout << "Enter the number for index 5: ";
    cin >> array[5];

    cout << "Enter the number for index 6: ";
    cin >> array[6];

    cout << "Enter the number for index 7: ";
    cin >> array[7];

    cout << "Enter the number for index 8: ";
    cin >> array[8];

    cout << "Enter the number for index 9: ";
    cin >> array[9];

    double mean;
    mean = (array[0] + array[1] + array[2] + array[3] + array[4] + array[5] + array[6] + array[7] + array[8] + array[9]) / 10;

    double std0, std1, std2, std3, std4, std5, std6, std7, std8, std9;
    std0 = pow((array[0] - mean), 2);
    std1 = pow((array[1] - mean), 2);
    std2 = pow((array[2] - mean), 2);
    std3 = pow((array[3] - mean), 2);
    std4 = pow((array[4] - mean), 2);
    std5 = pow((array[5] - mean), 2);
    std6 = pow((array[6] - mean), 2);
    std7 = pow((array[7] - mean), 2);
    std8 = pow((array[8] - mean), 2);
    std9 = pow((array[9] - mean), 2);

    double var, stddev;
    var = (std0 + std1 + std2 + std3 + std4 + std5 + std6 + std7 + std8 + std9) / 10;
    stddev = sqrt(var);

    cout << "results, " << mean << ", " << stddev;
}
