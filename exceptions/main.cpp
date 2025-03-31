#include <iostream>
#include "intio.h"
using namespace std;

int main()
{
    int x;

    x = promptInt("Enter a number between 1 and 5: ", 1, 5);
    cout << x << endl;
}