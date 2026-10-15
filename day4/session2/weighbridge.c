#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int ticketNumber;
    char vehicleRegistration[10];
    float grossWeight;
    float tareWeight;
    float netWeight;
}ticket;

float netWeight(float gross, float tare){
    return gross - tare;
}

void printTicket(ticket *t, int start, int end){
    for(int i=start;i<end;i++){
        printf("%d %s gross %.2f tear %.2f net %.2f\n",t[i].ticketNumber, t[i].vehicleRegistration, t[i].grossWeight, t[i].tareWeight, netWeight(t[i].grossWeight, t[i].tareWeight));
    }
}

int main(){
    int n;
    if(scanf("%d",&n)==0 || n<=0 || n>100000){
        printf("INVALID COUNT");
        return 1;
    }
    float total = 0;
    int max = 0;

    ticket* t = malloc(n * sizeof(ticket));

    for(int i=0;i<n;i++){
        scanf("%d",&t[i].ticketNumber);
        scanf("%s",t[i].vehicleRegistration);
        scanf("%f",&t[i].grossWeight);
        scanf("%d",&t[i].tareWeight);

        t[i].netWeight = netWeight(t[i].grossWeight, t[i].tareWeight);
        total += t[i].netWeight;
        if(t[i].netWeight > t[max].netWeight) max = i;
    }

    printTicket(t,0,n);
    printf("Tickets: %d\n",n);
    printf("Total net weight (kg): %.2f\n",total);
    printf("Heaviest net load: ");
    printTicket(t,max,max+1);

    return 0;
}