#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int factorial_of_n = factorial(n);
    cout << "The factorial of " << n << " is " << factorial_of_n << endl;

    return 0;
}
