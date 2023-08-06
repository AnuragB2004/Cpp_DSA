#include <iostream>
using namespace std;
void doSomething(int arr[], int i)
{
    cout << i << "th"
         << "element is: " << arr[i] << endl;
}
int main()
{
    int i, n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << arr[i] << endl;
    // for (int i = 0; i <= n-1; i = i + 1)
    // {
    //     cout << arr[i] << endl;
    // }
    return 0;
}