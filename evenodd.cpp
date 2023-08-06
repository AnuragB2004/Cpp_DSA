#include <iostream>
using namespace std;
int even_odd(int x)
{
    if (x % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}
int main()
{
    int a;
    cout << "a: ";
    cin >> a;
    even_odd(a);
    return 0;
}