#include <iostream>
using namespace std;

int main()
{
    int x = 60, y = 90;
    if ((y * x == 540) && (x + y == 150))
    {
        cout << "Good\n";
    }
    else
    {
        cout << "Bad\n"
             << endl;
    }
    return 0;
}
