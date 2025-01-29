#include <iostream>

using namespace std;

void f()
{
    int *ptr=nullptr;

    cout << "F's pointer: 0x" << ptr << endl;
    *ptr = 12;
}

void g(int *p1)
{
    int *p2 = p1;
    cout << "g's pointer: 0x" << p1 << endl;
}

int main()
{
    int x;
    g(&x);
    f();
}