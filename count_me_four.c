#include<stdio.h>
#include<string.h>
char s[10001];

int main(){
    scanf("%s",s);
    int freq[26] = {0};

    int s_len = strlen(s);

    for(int i = 0; i < s_len;i++){
        char ch = s[i];

    int index = ch - 'a';
    freq[index]++;
    }

    for(int i = 0;i<26;i++){
        if(freq[i] > 0){
            printf("%c - %d\n",i +'a',freq[i]);
        }
    }

    return 0;
}