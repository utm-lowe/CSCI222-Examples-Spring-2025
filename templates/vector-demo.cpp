#include <iostream>
#include <vector>
#include <set>

using namespace std;

template<typename T> 
void printVector(vector<T> &v)
{
    cout << '{';
    for(int i=0; i<v.size(); i++) {
        if(i!=0) {
            cout << ',';
        }
        cout << v[i];
    }
    cout << '}';
}

int main()
{
    // Template object, the typename class<type>
    // A vector of integers
    vector<int> ar;
    set<int> s;

    for(;;) {
        int x;
        cout << "Number: ";
        cin >> x;
        ar.push_back(x); // <-- Add the variable to the end of the vector
        s.insert(x);
        cout << "Vector: ";
        printVector(ar);
        cout << " size: " << ar.size() << " capacity: " << ar.capacity() << endl;

        cout << "Set: ";
        vector<int> v(s.begin(), s.end());
        printVector(v);
        cout << endl;

    }
}

