#include <stdio.h>
 
int main() {
 
    int p1,p2,u1,u2;
    float price1,price2,to_pay;
    scanf("%d %d %f",&p1,&u1,&price1);
    scanf("%d %d %f",&p2,&u2,&price2);
    to_pay=((u1*price1) + (u2*price2));
    printf("VALOR A PAGAR: R$ %.2f\n",to_pay);
    return 0;
}
