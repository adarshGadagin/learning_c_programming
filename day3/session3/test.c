#include <stdio.h>
int main(){
    int n = 3;
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // reverse
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][n-j-1];
            arr[i][n-j-1] = temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}