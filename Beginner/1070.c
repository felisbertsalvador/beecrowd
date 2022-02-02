#include <stdio.h>

int main(){

    int n;
    int i;

    scanf("%d", &n);
    while ( i != 6){
        if(n%2==1){
            printf("%d\n", n);
            i = i + 1;
        }
        n = n + 1;
    }
    return 0;
} 
