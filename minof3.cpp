#include <iostream>
using namespace std;
int findMin(int num1, int num2, int num3)
{
    int min = num1;
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    return min;
}
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int max = findMin(num1, num2, num3);

    cout << "The maxximum number is: " << max << endl;
    return 0;
}