#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;

    int find = -1;
    // find x in array with linear search
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            find = i;
            break;
        }
    }

    cout << find;
    return 0;
}