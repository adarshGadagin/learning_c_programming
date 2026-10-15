#include <stdio.h>
int main(){
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int sz = sizeof(notes)/sizeof(notes[0]);
    int n = 242;
    int cnt = 0;
    for(int i=0;i<sz;i++){
        if(n == 0)
            break;
        cnt += n / notes[i];
        n = n % notes[i];
    }
    
    printf("min num of notes = %d",cnt);
    return 0;
}