#include <iostream>
using namespace std;
int main()
{
    int score;
    cin >> score;

    if (score >= 80)
    {
        cout << "Well Done" << endl;
    }
    else if (score >= 50 && score < 80)
    {
        cout << "Can improve" << endl;
    }
    else if (score < 50 && score >= 33)
    {
        cout << "Very poor performance" << endl;
    }
    else
    {
        cout << "FAIL !" << endl;
    }
    return 0;
}