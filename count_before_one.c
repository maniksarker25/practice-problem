#include <stdio.h>

int count_before_one(int a[], int n)
{
    int total_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        total_count++;
    }

    return total_count;
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int total_count = count_before_one(a, n);
    printf("%d", total_count);
    return 0;
}