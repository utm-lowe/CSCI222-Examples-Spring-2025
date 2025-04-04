#include <iostream>

using namespace std;

// - When otherwise overloaded functions differ only by the type of
//   their arguments, you can use templates.
// - Templates allow the compiler to generate functions for you
// - Functions have a type argument
// - template <typename T>: T becomes a "fill-in-the balnk" type
template <typename T> 
T myabs(T x) 
{
    if(x < 0) {
        return -x;
    }

    return x;
}


int main()
{
    double x;
    for(;;) {
        cout << "Number: ";
        cin >> x;

        // Explicitly call a template by:
        //    name<type>
        cout << "Integer abs: " << myabs<int>(x) << endl;
        cout << "Double abs: " << myabs<double>(x) << endl;
    }
}