#include <iostream>

using namespace std;

int main()
{
    int x;              // statically defined x
    int *ptr = nullptr; // statically defined pointer

    // dynamically allocate an integer
    ptr = new int;

    cout << "&x: 0x" << &x << endl;
    cout << "&ptr: 0x" << &ptr << endl;
    cout << "ptr: 0x" << ptr << endl;
    

    // destroy the dynamically allocated integer
    delete ptr;
}