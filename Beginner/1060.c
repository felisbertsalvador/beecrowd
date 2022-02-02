#include <stdio.h>

int main(){
    float Pos;
    // Have to assign 0 to TotPos
    // To not throw a weird bug
    int TotPos = 0;
    for(int i=0; i<=5; i++){
        scanf("%f", &Pos);
        if(Pos > 0){
           TotPos = TotPos + 1; 
        }
    }

    printf("%d valores positivos\n", TotPos);
    return 0;
}
