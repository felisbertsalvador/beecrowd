#include <stdio.h>

int main(){
    int x;
    int al, gas, die;

    al = 0;
    gas = 0;
    die = 0;

    do{
        scanf("%d", &x);
        if(x == 1){
            al = al + 1;
        }
        if(x == 2){
            gas = gas + 1;
        }
        if(x == 3){
            die = die + 1;
        }
    } while( x != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);

    return 0;
}
