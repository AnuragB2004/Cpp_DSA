#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << sum << endl;
    return 0;
}