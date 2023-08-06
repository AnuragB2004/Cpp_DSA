#include <iostream>
using namespace std;
float circle(int radius)
{
    return (2 * 3.14 * radius);
}
int main()
{
    int r;
    cout << "r: ";
    cin >> r;
    float circumference = 2 * 3.14 * r;
    cout << "Circumference is: " << circumference << endl;
    return 0;
}