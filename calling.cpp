#include <iostream>
using namespace std;

// Call BY reference 
void increment(int &a) {
    a++;
}

int main() {
    int x=5;
    cout<<"Before: "<<x<<endl;
    increment(x);
    cout<<"After: "<<x<<endl;
    return 0;
}

//Call By Address
void increment(int *a) 
{
        (*a)++;
}
    
int main() 
{
    int x=5;
    cout<<"Before: "<<x<<endl;
    increment(&x);
    cout<<"After: "<<x<<endl;
    return 0;
}


