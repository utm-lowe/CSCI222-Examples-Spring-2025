#include <iostream>

using namespace std;

void move(int n, char src, char dest, char other);

int main()
{
    int n;
    cout << "How many disks? ";
    cin >> n;

    move(n, 'A', 'C', 'B');
}

void move(int n, char src, char dest, char other)
{
    // Base condition (moving just 1 disk)
    if(n == 1) {
        cout << src << " -> " << dest << endl;
        return;
    }

    // recursive case
    move(n-1, src, other, dest);
    move(1, src, dest, other);
    move(n-1, other, dest, src);
}