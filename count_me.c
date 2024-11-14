#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int two_count = 0;
    int three_count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            two_count++;
        }
        else if (a[i] % 2 == 0)
        {
            two_count++;
        }
        else if (a[i] % 3 == 0)
        {
            three_count++;
        }
    }

    printf("%d ", two_count);
    printf("%d", three_count);
    return 0;
}