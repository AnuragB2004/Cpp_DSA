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
        cout << "Number 1 is greatest" << endl;
    }
    else if(n2>n1 && n2>n3){
        cout << "Number 2 is greatest" << endl;
    }
    else{
        cout << "Number 3 is greatest" << endl;
    }
    return 0;
}