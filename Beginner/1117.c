#include <stdio.h>

int main(){
    float n1, n2, med;

    scanf("%f", &n1);
    if(n1<0 || n1>=10){
        printf("nota invalida\n");
        while(n1<0 || n1>10){
            scanf("%f", &n1);
            if(n1<0 || n1 > 10){
                printf("nota invalida\n");
            }
        }
    }

    scanf("%f", &n2);
    if(n2<0 || n2 > 10){
        printf("nota invalida\n");
        while(n2<0 || n2>10){
            scanf("%f", &n2);
            if(n2<0 || n2 > 10){
                printf("nota invalida\n");
            }
        }
    }

    med = (n1 + n2) / 2;

    printf("media = %2.2f\n", med);
    return 0;
}
