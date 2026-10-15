#include <stdio.h>

typedef union{
    float temp;
    char doorState[1];
    long pulse;
}temperature;

typedef struct{
    int id;
    char tag[1];
    temperature temp;
}sensor;

int main(){
    int n;
    if(scanf("%d",&n)==0 || n<=0 || n>1000){
        printf("INVALID COUNT");
        return 1;
    }



    return 0;
}