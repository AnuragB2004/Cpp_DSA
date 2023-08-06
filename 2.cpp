#include <iostream>
using namespace std;

int main()
{
    int L, B;
    cout << "Enter length: ";
    cin >> L;
    cout << "Enter breadth: ";
    cin >> B;
    cout << "Length of the rectangle is " << L << "and breadth is " << B << endl;
    int area = L * B;
    cout << "Hence the area of the rectangle is (length*breadth)." << endl;
    cout << "So the answer is " << L << "*" << B << "=" << area;
    return 0;
}