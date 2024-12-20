#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i =1; i <= n; i++)
    {
        cin >> a[i];
    }

    int min = INT_MAX;
    int pos = -1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < min)
        {
            pos = i;
            min = a[i];
        }
    }

    cout << min << " " << pos;
    return 0;
}