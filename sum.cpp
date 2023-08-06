#include <iostream>
using namespace std;
int sum(int x, int y)
{
    return (x + y);
}
int main()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    int sum = a + b;
    cout << sum;
    return 0;
}