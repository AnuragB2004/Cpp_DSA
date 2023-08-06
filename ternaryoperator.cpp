#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks: " << endl;
    cin >> marks;
    marks > 33 ? cout << "Pass" << endl : cout << "Fail" << endl;
    return 0;
}