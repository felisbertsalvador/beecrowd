#include <stdio.h>

int main(){

    int n;
    int inc = 0;
    float age = 0;

    while(n=!0){
        scanf("%d", &n);
        if(n < 0){
            break;
        }

        age = age + n;
        inc = inc + 1;
   }

    age = age / inc;
    printf("%1.2f\n", age);

    return 0;
}
