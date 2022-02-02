#include <stdio.h>

int main(){
    int n, pos, i=1;
    int highest = 1;

    while (i < 10){
        scanf("%d", &n);
        if(n > highest){
            highest = n;
            pos = i;
        }
        i = i + 1;
    }

    printf("%d\n", highest);
    printf("%d\n", pos);

    return 0;
}
