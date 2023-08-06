#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int P, T;
    ;
    float R, SI, Amt;
    cout << "Enter the principle amount: ";
    cin >> P;
    cout << "Enter the rate of interest: ";
    cin >> R;
    cout << "Enter the number of years: ";
    cin >> T;

    SI = (P * R * T) / 100;
    Amt = SI + P;
    cout << "The simple interest is: " << SI << endl;
    cout << "The total amount is: " << Amt;
    getch();
}