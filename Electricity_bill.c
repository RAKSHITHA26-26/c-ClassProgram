#include<stdio.h>
int main(){
    char customerName[50];
    int customerID;
    float units,totalbill,surcharge,finalbill;
    float fixedCharge=100;
    printf("Enter Customer ID: ");
    scanf("%d",&customerID);
    printf("Enter Customer Name: ");
    getchar();
    fgets(customerName,sizeof(customerName),stdin);
    customerName[strcspn(customerName,"\n")]=0;
    printf("Enter the number of units consumed: ");
    scanf("%f",&units);

    if(units<=100){
        totalbill=fixedCharge+(units*5);
    }else if(units<=300){
    totalbill=fixedCharge+(100*5)+((units-100)*7);
    }else{
    totalbill=fixedCharge+(100*5)+(200*7)+((units-300*10));
    }
    if (totalbill>100){
        surcharge=totalbill*0.5;
        finalbill=totalbill+surcharge;
    }else{
    finalbill=totalbill;
    surcharge=0;
    }
    printf("customer details\n");
    printf("Customer ID:%d\n",customerID);
    printf("Customer Name:%s\n",customerName);
    printf("Total Units Consumed:%.2f\n",units);
    printf("Total Bill Amount:%.2f\n",totalbill);

    if(surcharge>0){
        printf("Surcharge(5%%):Rs %.2f\n",surcharge);
    }
    printf("Final Bill Amount:Rs %.2f\n",finalbill);
    return 0;
}
