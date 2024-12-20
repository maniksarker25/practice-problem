#include <bits/stdc++.h>

using namespace std;

double calculateAverage(int n, double arr[])
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double average = calculateAverage(n, arr);
    cout << fixed << setprecision(7) << average;

    return 0;
}