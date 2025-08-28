#include <iostream>
using namespace std;

int main() {
    int x = 42;     
    int* p = &x;    

    
    cout << "x value: " << x << endl;
    cout << "address of x: " << &x << endl;
    cout << "p value (address stored in p): " << p << endl;
    cout << "*p value (value pointed by p): " << *p << endl;

    return 0;
}
