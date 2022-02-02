#include <stdio.h>

int main(){
    float num;
    float average = 0;
    int TotPos = 0;

    for(int i=0; i <= 5; i++){
        scanf("%f", &num);
        if(num > 0){
            TotPos = TotPos + 1;
            average = average + num;
        }
    }

    average = average/TotPos;
    printf("%d valores positivos\n", TotPos);
    printf("%2.1f\n", average);
    return 0;
}
