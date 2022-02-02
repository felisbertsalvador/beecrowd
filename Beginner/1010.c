#include <stdio.h>

int main(){
    int code1, units1; 
    int code2, units2; 
    float price, price1, price2;
    scanf("%d%d%f", &code1, &units1, &price1);
    scanf("%d%d%f", &code2, &units2, &price2);
    price1 = units1 * price1;
    price2 = units2 * price2;
    price = price1 + price2;
    printf("VALOR A PAGAR: R$ %2.2f\n", price);
    return 0;
}
