// HW - find max by kadans algo
#include <stdio.h>

typedef struct{
    char village[20];
    int pinCode;
}address;

typedef struct{
    int memId;
    char name[20];
    double share;
    address addr;
}members;

int main(){
    int n;
    int max = 0;
    double total = 0;

    if(scanf("%d",&n)==0 || n<=0){
        printf("INVALID COUNT");
        return 1;
    }
    members mem[n];
    // input
    for(int i=0;i<n;i++){
        scanf("%d",&mem[i].memId);
        scanf("%s",mem[i].name);
        scanf("%lf",&mem[i].share);
        scanf("%s",mem[i].addr.village);
        scanf("%d",&mem[i].addr.pinCode);

        total += mem[i].share;
        if(mem[i].share > mem[max].share) max = i;
    }
    // output
    printf("\nMember Ledger");
    for(int i=0;i<n;i++){
        printf("\n%d ",mem[i].memId);
        printf("%s ",mem[i].name);
        printf("%.2lf ",mem[i].share);
        printf("%s ",mem[i].addr.village);
        printf("%d\n",mem[i].addr.pinCode);
    }
    printf("Total share capital (Rs): %.2lf",total);
    printf("Highest holder: %d %s %.2lf %s %d",mem[max].memId,mem[max].name,mem[max].addr.village,mem[max].addr.pinCode,mem[max].share);
    return 0;
}