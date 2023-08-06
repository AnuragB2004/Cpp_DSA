#include <iostream>
using namespace std;
int prime(int number)
{
    if (number <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (prime(number))
    {
        cout << number << " is a prime number" << endl;
    }
    else
    {
        cout << number << " is not a prime number" << endl;
    }
    return 0;
}