#include <stdio.h>

int main(){
    int n;
    int i;

    n = 0;
    scanf("%d", &n);
    while(i < 10000){
        if(i%n==2){
            printf("%d\n", i);
        }
        i = i + 1;
    }

    return 0;
}
