#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before Call by Value: " << a << " " << b << endl;
    swapValue(a, b);
    cout << "After Call by Value: " << a << " " << b << endl;

    cout << endl;

    cout << "Before Call by Reference: " << a << " " << b << endl;
    swapReference(&a, &b);
    cout << "After Call by Reference: " << a << " " << b << endl;

    return 0;
}