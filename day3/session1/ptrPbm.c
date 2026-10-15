#include <stdio.h>
int main(){
    int* ptr[5];
    for(int i=0;i<5;i++){
        scanf("%d",ptr+i);
    }
    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }

    int arr[]={10,20,30,40,50};
    int *p=&arr[1];
    int *q=&arr[4]; // gives difference between positions
    return 0;
}