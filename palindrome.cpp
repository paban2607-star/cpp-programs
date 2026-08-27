#include <iostream>
using namespace std;

int main() {
    // String palindrome
    string s, rev = "";

    cout << "Enter string: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
        rev = rev + s[i];

    if (s == rev)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is Not Palindrome" << endl;


    // Number palindrome
    int n, original, revNum = 0;

    cout << "Enter number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }

    if (original == revNum)
        cout << "Number is Palindrome";
    else
        cout << "Number is Not Palindrome";

    return 0;
}