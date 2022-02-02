#include <stdio.h>

int main(){
    int i = 1, ntest;
    float x, y, res=0;

    scanf("%d", &ntest);

    while ( i <= ntest){
        scanf("%f%f", &x, &y);
        res = x / y;
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%1.1f\n", res);
        }
        i = i + 1;
    }

    return 0;
}
