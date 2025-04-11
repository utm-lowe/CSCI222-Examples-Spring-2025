#include <iostream>
#include <string>
#include "labeled.h"

using namespace std;

int main()
{
    Labeled<string> msg{"msg", ""};
    Labeled<int> x{"x"};

    msg = "Hello, world";
    cout << msg << endl;
    cout << ((string)msg).length() << endl;

    x = 0;
    x = x+6;
    x+=6;
    x++;
    cout << x << endl;
}