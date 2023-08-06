#include <iostream>
using namespace std;
float circle(int radius)
{
    return (3.14 * radius * radius);
}
int main()
{
    int r;
    cout << "r: ";
    cin >> r;
    float area = 3.14 * r * r;
    cout << "Area is " << area << endl;
    return 0;
}