#include <iostream >
using namespace std;
int main()
{
    int cp, sp, profit, loss;
    cout << "Enter Cost Price: " << endl;
    cin >> cp;
    cout << "Enter Selling Price: " << endl;
    cin >> sp;
    if (cp > sp)
    {
        cout << "Loss !" << endl;
    }
    else
    {
        cout << "Profit !" << endl;
    }
    return 0;
}