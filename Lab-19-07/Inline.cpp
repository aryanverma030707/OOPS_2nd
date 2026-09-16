// Program 3: Demonstrate inline functions, default arguments,
// and function overloading for performing arithmetic operations.

#include <iostream>
using namespace std;

// Inline function with a default argument
inline int add(int a, int b = 10) {
    return a + b;
}

// Function overloading: same name "add", different parameter lists
int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

//overload set for subtraction 
inline int multiply(int a, int b = 5) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "--- Default Arguments ---" << endl;
    cout << "add(5)          [b defaults to 10] = " << add(5) << endl;
    cout << "add(5, 20)                          = " << add(5, 20) << endl << endl;

    cout << "--- Function Overloading ---" << endl;
    cout << "add(5, 20, 30)  [3-arg int version]  = " << add(5, 20, 30) << endl;
    cout << "add(2.5, 3.7)   [double version]      = " << add(2.5, 3.7) << endl << endl;

    cout << "--- Inline Functions with Default Args ---" << endl;
    cout << "multiply(4)     [b defaults to 5]     = " << multiply(4) << endl;
    cout << "multiply(4, 6)                         = " << multiply(4, 6) << endl;
    cout << "multiply(2.5, 4.0) [double version]    = " << multiply(2.5, 4.0) << endl;

    return 0;
}