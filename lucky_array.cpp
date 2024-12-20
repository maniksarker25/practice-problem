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
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            frequency++;
        }
    }

    if (frequency % 2 == 0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }
    return 0;
}