#include <iostream>
using namespace std;
int eligibility(int age)
{
    if (age >= 18)
    {
        cout << "Eligible to vote";
    }
    else
    {
        cout << "Not eligible to vote";
    }
}
int main()
{
    int age;
    cout << "Age: ";
    cin >> age;
    eligibility(age);
    return 0;
}