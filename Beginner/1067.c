#include <stdio.h>

int main(){
    int n;
    int i=1;
    
    scanf("%d", &n);
    while (i <= n){
        if(i%2==1){
            printf("%d\n", i);
        }
        i = i + 1;
    }

    return 0;
}
