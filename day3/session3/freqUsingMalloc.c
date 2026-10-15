#include <stdio.h>
#include <stdlib.h>
int main(){
    int nums = 999;
    int* freq = calloc(10,sizeof(int));
    while(nums > 0){
        int rem = nums % 10;
        freq[rem]++;
        nums /= 10;
    }
    for(int i=0;i<10;i++){
        if(freq[i]>0) printf("%d: %d\n",i,freq[i]);
    }
}