#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    void input() {
        cin >> roll;
    }
    void display() {
        cout << roll << endl;
    }
};
int main() {
    Student *p = new Student;
    p->input();
    p->display();
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
        arr[i].input();
    for (int i = 0; i < n; i++)
        arr[i].display();
    delete p;
    delete[] arr;
    return 0;
}