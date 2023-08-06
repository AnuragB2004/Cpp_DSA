#include <iostream>
using namespace std;
int main()
{
    int temp, num1, num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Swapped number is: " << num1 << endl;
    cout << "Swapped number is: " << num2 << endl;
    return 0;
}