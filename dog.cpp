#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    string breed;

    void display() {
        cout << "Dog Name: " << name << endl;
        cout << "Breed Name: " << breed << endl;
    }
};

int main() {
    Dog tuffy;
    tuffy.name = "Tuffy";
    tuffy.breed = "Papillon";
    tuffy.display();
    return 0;
}