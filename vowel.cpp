#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;

    switch (character)
    {
    case 'a':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;
    default:
        cout << "Consonants";
        break;
    }
    return 0;
}