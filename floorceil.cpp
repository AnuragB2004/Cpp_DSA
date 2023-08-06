#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    cout << "a: " << endl;
    cin >> a;
    double floored = floor(a);
    double ceiled = ceil(a);
    cout << "Floored value: " << floored << endl;
    cout << "Ceiled value: " << ceiled << endl;
    return 0;
}