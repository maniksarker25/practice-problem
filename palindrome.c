#include <stdio.h>
#include <string.h>



int is_palindrome(char s[],int string_len){
    int isPal = 1;
    for(int i = 0,j=string_len -1;i<string_len;i++,j--){
            if(s[i] != s[j]){
                isPal = 0;
                break;
            }
    }   
    return isPal;
}

int main()
{

    char s[10001];

    scanf("%s", s);
    int string_len = strlen(s);
    int result = is_palindrome(s,string_len);
    if(result ==1 ){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

    return 0;
}