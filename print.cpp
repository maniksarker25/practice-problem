#include <iostream>
using namespace std;

// Function to print numbers from 1 to N
void printNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
            cout << " ";
        cout << i;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    printNumbers(n);

    return 0;
}
