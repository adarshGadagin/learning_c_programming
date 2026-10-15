#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int (*ptr)(int, int) = add;
    printf("%d\n",ptr(10,20));
    int x=10, y=20;
    int *const p = &x;
    *p = 50;
    printf("%d",x);

    return 0;
}