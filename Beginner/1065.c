#include <stdio.h>

int main(){
    int num, TotEven=0;
    
    for(int i=0; i<=4; i++){
        scanf("%d", &num);
        if(num%2==0){
            TotEven = TotEven + 1;
        }
    }

    printf("%d valores pares\n", TotEven);
    return 0;
}
