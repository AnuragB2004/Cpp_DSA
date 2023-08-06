#include <iostream>
using namespace std;
int product(int x, int y)
{
    return (x * y);
}
int main()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    int product = a * b;
    cout << product;
    return 0;
}