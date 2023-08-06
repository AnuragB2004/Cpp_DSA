#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    if(num % 2 == 0){
        cout << "It is even !" << endl;
    }
    else{
        cout << "It is odd !" << endl;
    }
    return 0;
}