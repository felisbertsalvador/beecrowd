#include <stdio.h>

int main(){

    int a, NegNum = 0;
    int PosNum = 0, ImpNum = 0;
    int ParNum = 0;

    for(int i=0; i<=4; i++){
        scanf("%d", &a);
        if(a%2==0){
            ParNum = ParNum + 1;
        }
        else{
            ImpNum = ImpNum + 1;
        }
        if(a < 0){
            NegNum = NegNum + 1;
        }
        if(a > 0){
            PosNum = PosNum + 1;
         }
    }
    printf("%d valor(es) par(es)\n", ParNum);
    printf("%d valor(es) impar(es)\n", ImpNum);
    printf("%d valor(es) positivo(s)\n", PosNum);
    printf("%d valor(es) negativo(s)\n", NegNum);
}
