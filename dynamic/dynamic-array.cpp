#include <iostream>

using namespace std;

/**
 * Prints an array
 * @param ar[] the array
 * @param n the size of the array
 */
void printArray(int ar[], int n);

int main()
{
    int *list = nullptr;
    int n;

    // get the number of numbers
    cout << "How many numbers? ";
    cin >> n;

    // create an array to hold the numbers
    list = new int[n];

    // read in the list of numbers
    for(int i=0; i<n; i++) {
        cin >> list[i];
    }

    printArray(list, n);
    delete [] list;
}

void printArray(int ar[], int n) 
{
    cout << "{";
    //loop over the array using pointer arithmetic
    for(int *p = ar; p < ar+n; p++) {
        if(p != ar) {
            cout << ", ";
        }
        cout << *p;
    }
    cout << "}" << endl;
}