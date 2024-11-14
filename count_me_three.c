

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int capital_count = 0, small_count = 0, digit_count = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital_count++;
            }

            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small_count++;
            }

            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit_count++;
            }
        }

        printf("%d %d %d\n", capital_count, small_count, digit_count);
    }

    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         char s[10001];
//         scanf("%s", s);

//         int capital_count = 0, small_count = 0, digit_count = 0;

//         for (int i = 0; s[i] != '\0'; i++)
//         {
//             if (isupper(s[i]))
//             {
//                 capital_count++;
//             }
//             else if (islower(s[i]))
//             {
//                 small_count++;
//             }
//             else if (isdigit(s[i]))
//             {
//                 digit_count++;
//             }
//         }

//         printf("%d %d %d\n", capital_count, small_count, digit_count);
//     }

//     return 0;
// }
