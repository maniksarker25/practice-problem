#include <stdio.h>
#include <string.h>

int main()
{
    char S[100001];
    scanf("%s", S);

    int string_len = strlen(S);
    int cons_count = 0;

    for (int i = 0; i < string_len; i++)
    {
        if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
        {
            cons_count++;
        }
    }

    printf("%d", cons_count);

    return 0;
}