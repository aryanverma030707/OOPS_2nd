// Program 4: Use modern C++ features such as auto and range-based
// for loop to traverse and display elements of a collection.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    vector<string> names = {"Alice", "Bob", "Charlie"};

    cout << "Numbers: ";
    for (auto n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Names: ";
    for (const auto &name : names) {
        cout << name << " ";
    }
    cout << endl;

    for (auto &n : numbers) {
        n *= 2;
    }

    cout << "Doubled Numbers: ";
    for (auto n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}