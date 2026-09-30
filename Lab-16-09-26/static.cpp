// Program 7 ->	Implement a program using static members and friend functions
// to illustrate shared data and controlled access.


#include <iostream>
using namespace std;
class Student {
    int marks;
    static int total;
public:
    Student(int m) {
        marks=m;
        total+=marks;
    }
    friend void showTotal(Student s);
};
int Student::total=0;
void showTotal(Student s) {
    cout<<"Marks of student: "<<s.marks<<endl;
    cout<<"Total marks: "<<Student::total<<endl;
}
int main() {
    Student s1(80);
    Student s2(75);
    Student s3(90);
    showTotal(s3);
    return 0;
}