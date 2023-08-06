#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    float sum, average, multiply, divide, subtract;
    cout << "Enter two numbers: " << endl;
    cin >> num1;
    cin >> num2;

    sum = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide = num1 / num2;
    average = sum / 2;

    cout << "Sum is " << sum << endl;
    cout << "Subtract is " << subtract << endl;
    cout << "Multiply is " << multiply << endl;
    cout << "Divide is " << divide << endl;
    cout << "Average is " << average << endl;
    return 0;
}