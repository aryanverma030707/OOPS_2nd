#include <iostream>
#include <memory>
using namespace std;
int main() {
    unique_ptr<int> p1 = make_unique<int>(10);
    cout << "Unique Pointer: " << *p1 << endl;
    shared_ptr<int> p2 = make_shared<int>(20);
    shared_ptr<int> p3 = p2;
    cout << "Shared Pointer: " << *p2 << endl;
    cout << "Reference Count: " << p2.use_count() << endl;
    p3.reset();
    cout << "Reference Count: " << p2.use_count() << endl;
    return 0;
}