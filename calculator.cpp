#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter 1st number: " << endl;
    cin >> n1;
    cout << "Enter 2nd number: " << endl;
    cin >> n2;
    cout << "Enter an operator(+,-,*,/): ";
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum is: " << n1 + n2 << endl;
        break;
    case '-':
        cout << "Difference is: " << n1 - n2 << endl;
        break;
    case '*':
        cout << "Product is: " << n1 * n2 << endl;
        break;
    case '/':
        cout << "Quotient is: " << n1 / n2 << endl;
        break;
    default:
        cout << "Enter a valid response" << endl;
        break;
    }
    return 0;
}