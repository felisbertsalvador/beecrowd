#include <stdio.h>

int main(){
    float x;

    scanf("%f", &x);
    if(x >= 0 && x <= 25.0000){
        printf("Intervalo [0,25]\n");
    }
    else if(x > 25.0000 && x <= 50.0000000){
        printf("Intervalo (25,50]\n");
    }
    else if(x > 50.0000000 && x <= 75.0000){
        printf("Intervalo (50,75]\n");
    }
    else if(x > 70.0000000 && x <= 100.0000){
        printf("Intervalo (75,100]\n");
    }
    else {
        printf("Fora de intervalo\n");
    }

    return 0;
}
