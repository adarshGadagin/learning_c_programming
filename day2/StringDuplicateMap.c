#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "thequickbrownfoxjumpsoverthelazydog";
    int hash[26] = {0};
    for(int i=0;str[i]!='\0';i++){
        char ch = str[i];
        int idx = ch - 'a';
        if(idx < 0) idx = ch - 'A';
        hash[idx]++;
    }
    for(int i=0;i<26;i++){
        printf("%c: %d\t",'A'+i,hash[i]);
        if(i==12) printf("\n");
    }
}