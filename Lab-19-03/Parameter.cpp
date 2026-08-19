// Program 2: Demonstrate parameter passing techniques
// (call by value, call by reference, call by address)
// and analyze their effect on variable modification.

#include <iostream>
using namespace std;

// Call by value: 
void callByValue(int x) {
    x = x * 10;
    cout << "  Inside callByValue, x = " << x << endl;
}

// Call by reference: 
void callByReference(int &x) {
    x = x * 10;
    cout << "  Inside callByReference, x = " << x << endl;
}

// Call by address: 
void callByAddress(int *x) {
    *x = *x * 10;
    cout << "  Inside callByAddress, *x = " << *x << endl;
}

int main() {
    int a, b, c;

    cout << "Enter a value for 'a' (call by value): ";
    cin >> a;
    cout << "Enter a value for 'b' (call by reference): ";
    cin >> b;
    cout << "Enter a value for 'c' (call by address): ";
    cin >> c;
    cout << endl;

    cout << "1) CALL BY VALUE" << endl;
    cout << "  Before: a = " << a << endl;
    callByValue(a);
    cout << "  After:  a = " << a << "  (unchanged - only the copy was modified)" << endl << endl;

    cout << "2) CALL BY REFERENCE" << endl;
    cout << "  Before: b = " << b << endl;
    callByReference(b);
    cout << "  After:  b = " << b << "  (changed - reference points to original)" << endl << endl;

    cout << "3) CALL BY ADDRESS (POINTER)" << endl;
    cout << "  Before: c = " << c << endl;
    callByAddress(&c);
    cout << "  After:  c = " << c << "  (changed - modified original via its address)" << endl;

    return 0;
}