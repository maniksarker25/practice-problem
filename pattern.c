
/*
print this :
   #
   ---
  #####
 -------
#########
 -------
  #####
   ---
    #

*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;

    for (int i = 1; i <= n; i++, k += 2)
    {
        int space = n - i;
        while (space--)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }

    k -= 4;
    for (int i = n - 1; i >= 1; i--, k -= 2)
    {
        int space = n - i;
        while (space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}