#include <stdio.h>

int main(){
    int X, Y;
    float price;

    scanf("%d%d", &X, &Y);

    switch(X){
        case 1:
            price = 4.00 * Y;
            break;
        case 2:
            price = 4.50 * Y;
            break;
        case 3:
            price = 5.00 * Y;
            break;
        case 4:
            price = 2.00 * Y;
            break;
        case 5:
            price = 1.50 * Y;
            break;
            
    }

    printf("Total: R$ %2.2f\n", price);
    return 0;
}
