#include <stdio.h>

int main(){
    int t, n;
    int in = 0, out = 0;

    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        scanf("%d", &t);
        if(t >= 10 && t <= 20){
            in = in + 1;
        }
        else{
            out = out + 1;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
