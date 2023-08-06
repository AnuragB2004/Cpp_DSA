#include<iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    cout << "Enter number 1: " << endl;
    cin >> n1;
    cout << "Enter number 2: " << endl;
    cin >> n2;
    cout << "Enter number 3: " << endl;
    cin >> n3;
    if(n1>n2 && n1>n3){
        cout << "Max is: " << n1 << endl;
    }
    else if(n2>n1 && n2>n3){
        cout << "Max is: " << n2 << endl;
    }
    else{
        cout << "Max is: " << n3 << endl;
    }
    return 0;
}